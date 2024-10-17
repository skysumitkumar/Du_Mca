package file3;
public class Circle extends Shapes{
    //this will run when obj of circle is created 
    //hence it is overriding the parent method
    @Override //this is called annotation
    void area()
    {
        System.out.println("Area is PI*r*r");
    }
}
