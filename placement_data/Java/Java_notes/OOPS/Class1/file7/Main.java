//final variable is all capital 
//we cant modify the final variable
//we have to initialize final variable when we declare them
//final give guaranty to not change only when instance variable are premetive in data type and not reference and object stuff
//because instance variable of reference type has final modifier behind it value of instance varible will never change reference to the object never change it always refers to the same object but the value of the object can be change 
class A{
    final int num=10;
    String name;
    public A(String name)
    {
        this.name=name;
    }
}
public class Main
{
    public static void main(String[] args)
    {
        final A sumit=new A("sumit kumar");
        sumit.name="other name";

        //when a non premitive is final you can't reassign it
        sumit=new A("new object");
    }

}