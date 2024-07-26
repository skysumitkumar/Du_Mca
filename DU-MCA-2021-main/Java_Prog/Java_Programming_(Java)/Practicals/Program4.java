public class Program4
{
    public static String getClassName(String class_name) throws ClassNotFoundException
    {
        return Class.forName(class_name).toGenericString();
    }
    public static int integer_divide(int a, int b) throws ArithmeticException
    {
        if(a == 0 && b == 0)
            throw new ArithmeticException("attempt to compute 0/0, which is indeterminate");
        return a / b;
    }

    public static void main(String[] args)
    {
        try
        {
            System.out.println(getClassName("Program4"));
            System.out.println(getClassName("java.lang.Integer"));
            System.out.println(getClassName("Program3"));

            int c = integer_divide(5, 6);
            int d = integer_divide(9, 12);
            int e = integer_divide(c, d);
        }
        catch(Exception e)
        {
            System.err.println(e);
            e.printStackTrace(System.err);
        }
    }
}