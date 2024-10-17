class A{
    final int num=10;
    String name;
    public A(String name)
    {
        this.name=name;
    }
    //when we want some operation when object is destroying  we use finalize method
    @Override
    protected void finalize() throws Throwable {
        // TODO Auto-generated method stub
        System.out.println("object is destroyed");
    }
}
public class Main
{
    public static void main(String[] args)
    {
        final A sumit=new A("sumit kumar");
        sumit.name="other name";

        A obj;
        for(int i=0;i<100000000;i++)
        {
            obj=new A("amit");
        }
        
    }

}