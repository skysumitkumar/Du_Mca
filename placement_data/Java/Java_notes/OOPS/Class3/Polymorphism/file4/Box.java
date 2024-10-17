package file4;
//make class as final
//to prevent call to inherit we make class as final
//when we put class as final implicitly its all methods are final too
public class Box
{
    private double l;
    double h;
    double w;
    double weight;
    static void greeting()
    {
        System.out.println("Hey,I am in Box class. Greeting");
    }
    Box()
    {
        this.h=-1;
        this.l=-1;
        this.w=-1;
    }
    //cube
    Box(double side)
    {
        super();//it call the constructor of Object class
        this.w=side;
        this.l=side;
        this.h=side;
    }
    Box(double l,double h,double w)
    {
        this.l=l;
        this.h=h;
        this.w=w;
    }
    Box(Box old)
    {
        this.l=old.l;
        this.h=old.h;
        this.w=old.w;
    }
    public void informatin()
    {
        System.out.println("Running the box");
    }
}
