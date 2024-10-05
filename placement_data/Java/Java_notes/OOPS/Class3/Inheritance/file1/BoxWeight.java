package Inheritance.file1;

public class BoxWeight extends Box{
    double weight;
    public BoxWeight()
    {
        this.weight=-1;
        //this.l=5;//it give error because in parent it is private
    }
    public BoxWeight(double l,double h,double w,double weight)
    {
        // used to initialize values present in parent class
        super(l,h,w); //it call the parent constructor and pass these values there
        this.weight=weight;
    }
}
