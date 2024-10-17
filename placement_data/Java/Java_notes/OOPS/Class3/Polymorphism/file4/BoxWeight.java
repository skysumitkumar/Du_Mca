package file4;

public class BoxWeight extends Box{
    double weight;
    public BoxWeight()
    {
        this.weight=-1;
        //this.l=5;//it give error because in parent it is private
    }
    //we cant Override static method we just inherit it
    // @Override
    // static void greeting()
    // {
    //     System.out.println("Hey,I am in BoxWeight class. Greeting");
    // }
    BoxWeight(double side,double weight)
    {
        super(side); 
        this.weight=weight;
    }
    BoxWeight(BoxWeight other)
    {
        super(other); //it is exactly like Box box1=new BoxWeight(1,2,3,4,5);
        weight=other.weight;
    }
    //if the super class constructor require some parameter so all the subclass must pass those parameters
    public BoxWeight(double l,double h,double w,double weight)
    {
        // used to initialize values present in parent class
        super(l,h,w); //it call the parent constructor and pass these values there
        System.out.println(super.weight);//we have weight in BoxWeight and Box both to use weight of Box we can use super
        this.weight=weight;
        //super(l,h,w); //if we initialize child class first and base class after so it give error we have firstly initialize base class than child class
    }
}
