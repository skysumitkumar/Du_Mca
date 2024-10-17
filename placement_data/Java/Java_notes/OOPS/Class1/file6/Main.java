//here they not swap because Integer is final so we can't modify the value
public class Main
{
    static void swap(int a,int b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    static void swap1(Integer a,Integer b)
    {
        Integer temp=a;
        a=b;
        b=temp;
    }
    public static void main(String[] args)
    {
        int a=10;
        int b=20;
        Integer num=45;
        Integer a1=30;
        Integer b1=40;
        //in static function we can only call static function
        //premetives are just pass by value;
        swap(a,b);
        System.out.println(a + " " + b);
        swap(a1,b1);
        System.out.println(a1 + " " + b1);
        swap1(a1,b1);
        System.out.println(a1 + " " + b1);
    }

}