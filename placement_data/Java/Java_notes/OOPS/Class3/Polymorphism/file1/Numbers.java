package file1;
//method overloading
public class Numbers {
    
    int sum(int a,int b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)
    {
        return a+b;
    }
    double sub(double a,int b)
    {
        return a-b;
    }
    public static void main(String[] args) {
        Numbers obj=new Numbers();
        obj.sum(1,2);
        obj.sum(1,2,3);
        obj.sub(5,7);//here we pass integer and function accept double and int so java automatically convert int to double
        //but if we pass double and function accept int then it give error
        //obj.sum(2,3,4,4);//it give error we don't have constructor
    }
}
