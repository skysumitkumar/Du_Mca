import java.io.PrintStream;

/** Represents a 2-D coordinate. */
class Coordinate
{
    int x, y;

    /** Creates a new Coordinate, with the value at origin. */
    public Coordinate()
    {
        this(0, 0);
    }
    /** Creates a new Coordinate.
     *
     * @param x Absicca value.
     * @param y Ordinate value.
     */
    public Coordinate(int x, int y)
    {
        this.x = x; this.y = y;
    }

    /** Swaps the value of two coordinate objects.
     *
     * @param c1 First coordinate.
     * @param c2 Second coordinate.
     */
    public static void swap(Coordinate c1, Coordinate c2)
    {
        int tmp = c1.x; c1.x = c2.x; c2.x = tmp;
        tmp = c1.y; c1.y = c2.y; c2.y = tmp;
    }

    /** Returns a string representation for the coordinate. */
    public String toString()
    {
        return "(" + x + ", " + y + ")";
    }
}

/** Represents a console based raster for performing drawing of primitives. */
class ConsoleRaster
{
    protected char[][] canvas;

    /** Creates a new ConsoleRaster object.
     *
     * @param width Width of the raster.
     * @param height Height of the raster.
     */
    public ConsoleRaster(int width, int height)
    {
        canvas = new char[height][width];
        for(int i=0; i<height; ++i)
            for(int j=0; j<width; ++j)
                canvas[i][j] = ' ';
    }

    /** Draws a single block character on the raster.
     *
     * @param x The x coordinate to draw the block at.
     * @param y The y coordinate to draw the block at.
     * @param pen The character to use to draw.
     */
    public void draw_block(int x, int y, char pen)
    {
        if(x >= 0 && x < canvas[0].length && y >= 0 && y < canvas.length)
        {
            canvas[y][x] = pen;
        }
    }

    /** Draws a line of the raster using Bresenham's line drawing algorithm.
     *
     * @param from The start coordinate to draw the line from.
     * @param to The end coordinate to draw the line to.
     * @param thickness The thickness of the line to draw.
     * @param pen The character to use to draw.
     */
    public void draw_line(Coordinate from, Coordinate to, int thickness, char pen)
    {
        int left = thickness >> 1, right = left;
        if((thickness & 1) == 0) --right;

        int dx = to.x-from.x, dy = to.y-from.y, diff, x, y, r=1;
        if(Math.abs(dy) < Math.abs(dx))
        {
            if(dx < 0) { dx=-dx; dy=-dy; Coordinate.swap(from, to); }
            if(dy < 0) { dy=-dy; r=-1; } y = from.y;
            diff = ((dy<<1) - dx);
            for(x=from.x; x<=to.x; x++)
            {
                for(int i=1; i<=left; i++) draw_block(x, y - i, pen);
                draw_block(x, y, pen);
                for(int i=1; i<=right; i++) draw_block(x, y + i, pen);
                if(diff > 0) { y=y+r; diff-=(dx<<1); } // D += 2dy - 2dx
                diff += (dy<<1);                       // D += 2dy
            }
        }
        else
        {
            if(dy < 0) { dx=-dx; dy=-dy; Coordinate.swap(from, to); }
            if(dx < 0) { dx=-dx; r=-1; } x = from.x;
            diff = ((dx<<1) - dy);
            for(y=from.y; y<=to.y; y++)
            {
                for(int i=1; i<=left; i++) draw_block(x - i, y, pen);
                draw_block(x, y, pen);
                for(int i=1; i<=right; i++) draw_block(x + i, y, pen);
                if(diff > 0) { x=x+r; diff-=(dy<<1); } // D += 2dx - 2dy
                diff += (dx<<1);                       // D += 2dx
            }
        }
    }

    /** Renders the raster on a given stream.
     *
     * @param out The stream object to render on.
     */
    public void render(PrintStream out)
    {
        for(char[] row : canvas)
            out.println(row);
    }
    /** Convenience function for rendering to STDOUT. */
    public void render()
    {
        render(System.out);
    }
}

public class Assignment1
{
    final static String usage_string = "java " + Assignment1.class.getSimpleName() + " [-w WIDTH] [-p PEN] [-g] [-h]";
    final static String help_string  = (
        "renders the Latin Capital Letter Y with Diaeresis character\n"+
        "(\u0178) in different sizes\n\n"+
        "optional arguments:\n"+
        "  -w, --width  width for the rendered result. Thickness and\n"+
        "               height are automatically determined using the\n"+
        "               specified value. The default is 12 units.\n"+
        "  -p, --pen    character to use for drawing the graphic. \n"+
        "               Defaults to the full-block character (\u2588).\n"+
        "  -g, --use-graphics\n"+
        "               use line graphics drawing algorithms to render\n"+
        "               the graphic\n"+
        "  -h, --help   display this help message and exit\n"
    );

    public static void main(String[] args)
    {
        int width = 12; char pen = '\u2588';
        boolean use_graphics = false, show_help = false;

        try {
            for(int i=0; i<args.length; ++i) {
                String arg = args[i];
                if(arg.charAt(0) == '-') {
                    if(arg.charAt(1) == '-') {
                        switch(arg) {
                            case "--width":
                                if(i + 1 >= args.length)
                                    throw new IllegalArgumentException("'--width' requires exactly one argument");
                                width = Integer.parseInt(args[++i]);
                                break;
                            case "--pen":
                                if(i + 1 >= args.length)
                                    throw new IllegalArgumentException("'--pen' requires exactly one argument");
                                pen = args[++i].charAt(0);
                                break;
                            case "--use-graphics":
                                use_graphics = true;
                                break;
                            case "--help":
                                show_help = true;
                                break;
                            default:
                                throw new IllegalArgumentException("unknown optional argument: '" + arg + "'");
                        }
                    }
                    else {
                        int k = i;
                        for(int j=1; j<arg.length(); ++j) {
                            switch(arg.charAt(j)) {
                                case 'w':
                                    if(k + 1 >= args.length)
                                        throw new IllegalArgumentException(
                                            "'--width' requires exactly one argument"
                                        );
                                    width = Integer.parseInt(args[++k]);
                                    break;
                                case 'p':
                                    if(k + 1 >= args.length)
                                        throw new IllegalArgumentException("'--pen' requires exactly one argument");
                                    pen = args[++k].charAt(0);
                                    break;
                                case 'g':
                                    use_graphics = true;
                                    break;
                                case 'h':
                                    show_help = true;
                                    break;
                                default:
                                    throw new IllegalArgumentException(
                                        "unknown optional argument: '-" + arg.charAt(j) + "'"
                                    );
                            }
                        }
                        i = k;
                    }
                }
                else
                    throw new IllegalArgumentException("extra positional argument '" + arg + "' present in arguments");
            }
        }
        catch(Exception e) {
            System.err.println("usage: " + usage_string);
            System.err.println("error: " + e.getMessage());
            System.exit(1);
        }

        if(show_help) {
            System.out.println("usage: " + usage_string);
            System.out.println();
            System.out.println(help_string);
            System.exit(0);
        }

        int thickness = width / 3;

        if(use_graphics) {
            width <<= 1;

            int height = (width << 1) / 3;
            int spc_w = (width - thickness) >> 1;
            int diaresis_size = Math.max(1, thickness >> 1);

            String left_spc = new String(new char[(width >> 1) - (thickness >> 1) - diaresis_size])
                                    .replace('\0', ' ');
            String diaresis = new String(new char[diaresis_size]   ).replace('\0', pen);
            String gap      = new String(new char[thickness]       ).replace('\0', ' ');

            System.out.println();
            for(int i = 0; i < diaresis_size; ++i)
            {
                System.out.println(left_spc + diaresis + gap + diaresis);
            }
            System.out.println();

            ConsoleRaster raster = new ConsoleRaster(width, height >> 1);
            raster.draw_line(
                new Coordinate(0, 0),
                new Coordinate((width >> 1)-1, (height >> 1) - 1),
                thickness - 1, pen
            );
            raster.draw_line(
                new Coordinate(width - 1, 0),
                new Coordinate((width >> 1)-1, (height >> 1) - 1),
                thickness - 1, pen
            );
            raster.render();

            String spc = new String(new char[spc_w]    ).replace('\0', ' ');
            String blk = new String(new char[thickness]).replace('\0', pen);

            for(int i = 0; i < height >> 1; ++i)
                System.out.println(spc + blk + spc);
        }
        else {
            if((thickness & 1) == 0)
                thickness++;

            int t_width = Math.max(thickness >> 1, 1);
            int length = (thickness << 1) - 1;
            int gap    = width < 6 ? 1 : 0;

            System.out.println();

            // Print the diaresis
            for(int i=0; i<t_width + (width < 6 ? 0 : 1); ++i) {
                for(int j=0; j<width-thickness-gap; j++)
                    System.out.print(' ');
                for(int j=0; j<thickness; j++)
                    System.out.print(pen);
                for(int j=0; j<length+(gap << 1)-(1-gap); j++)
                    System.out.print(' ');
                for(int j=0; j<thickness; j++)
                    System.out.print(pen);
                System.out.println();
            }
            System.out.println();

            // Print V
            for(int i=0; i<width; ++i) {
                for(int j=0; j<i; j++)
                    System.out.print(' ');
                for(int j=0; j<thickness; j++)
                    System.out.print(pen);
                for(int j=0; j<width-i-1 + (width-i-(1-gap)); j++)
                    System.out.print(' ');
                for(int j=0; j<thickness; j++)
                    System.out.print(pen);
                System.out.println();
            }

            // Print |
            for(int i=0; i<width; ++i) {
                for(int j=0; j<width; j++)
                    System.out.print(' ');
                for(int j=0; j<(thickness << 1) - 1 - (1-gap); j++)
                    System.out.print(pen);
                System.out.println();
            }
        }

        System.out.println();
    }
}