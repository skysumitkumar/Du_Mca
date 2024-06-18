public class Program2
{
    public static double add(double a, double b) { return a+b; }
    public static double add(double a, double b, double c) { return a+b+c; }
    public static double sub(double a, double b) { return a-b; }
    public static double sub(double a, double b, double c) { return a-b-c; }
    public static double sub(double a) { return -a; }
    public static double mul(double a, double b) { return a*b; }
    public static double mul(double a, double b, double c) { return a*b*c; }
    public static double div(double a, double b) { return a / b; }
    public static double div(double a, double b, double c) { return a / b / c; }
    public static double div(double a) { return 1.0/a; }
    public static double mod(double a, double b) { return a % b; }
    public static double mod(double a, double b, double c) { return a % b % c; }

    public static void main(String args[])
    {
        System.out.println("6 + 7 + (-2)            = " + add(6, 7, sub(2)));
        System.out.println("7 / (8 / 2)             = " + div(7, 8, 2));
        System.out.println(
            "7 % (8 / 9 - 8 * 4 + 7) = " +
            mod(7, add(mul(8, div(9)), sub(mul(8, 4)), 7))
        );
	System.out.println("9 % 5 % 2               = " + mod(9, 5, 2));
        System.out.println("8 / 4 / 2               = " + div(8, 4, 2));
    }
}