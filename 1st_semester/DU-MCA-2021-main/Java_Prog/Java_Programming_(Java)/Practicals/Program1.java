abstract class Polygon
{
    protected double[] sides;

    public Polygon(double ... sides)
    {
        this.sides = new double[sides.length];
        System.arraycopy(sides, 0, this.sides, 0, sides.length);
    }

    public double perimeter()
    {
        double perimeter_value = 0.0;
        for(double side : sides) perimeter_value += side;
        return perimeter_value;
    }
    abstract public double area();

    @Override
    public String toString()
    {
        String[] side_values = new String[sides.length];
        int i = 0; for(double side : sides)
            side_values[i++] = String.valueOf(side);
        return "Polygon(" + String.join(",", side_values) + ")";
    }
}

class Triangle extends Polygon
{
    public Triangle(double a, double b, double c)
    {
        super(a, b, c);
    }

    @Override
    public double area()
    {
	double semi = perimeter() / 2.0;
	double semi_product = 1.0;
	for(double side : sides)
            semi_product *= (semi - side);
	return Math.sqrt(semi * semi_product);
    }

    @Override
    public String toString()
    {
        return "Rectangle(a=" + sides[0] + ",b=" + sides[1] + ")";
    }
}

class Rectangle extends Polygon
{
    public Rectangle(double a, double b)
    {
        super(a, b);
    }
    @Override
    public double perimeter()
    {
        return super.perimeter() * 2.0;
    }
    @Override
    public double area()
    {
        return sides[0] * sides[1];
    }
}

class Square extends Rectangle
{
    public Square(double side)
    {
	super(side, side);
    }
}

class RightAngledTriangle extends Triangle
{
    public RightAngledTriangle(double base, double height)
    {
        super(base, height, Math.sqrt(base*base + height*height));
    }

    @Override
    public double area()
    {
        return sides[0] * sides[1] * 0.5;
    }

    public String toString()
    {
        return "RightAngledTriangle(base="
                + sides[0] + ",height=" + sides[1] + ")";
    }
}

public class Program1
{
    public static void display(Polygon polygon)
    {
        System.out.println("Shape    : " + polygon);
	System.out.println("Perimeter: " + polygon.perimeter());
        System.out.println("Area     : " + polygon.area());
        System.out.println("");
    }

    public static void main(String[] args)
    {
        display(new Triangle(5, 6, 7));
        display(new RightAngledTriangle(5, 6));
        display(new Rectangle(5, 10));
        display(new Square(6));
    }
}