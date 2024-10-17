package file3;
//runtime polymorphism
//achieved by method overriding

//dynamic method dispatch
//it is just a mechanism by which a call to a overridden method is resolved at run time rather than compile time
//super class reference variable can refer subclass object when a override method is called through super class variable 
//java determine which version of that method is to call based on the type of the object at the time this call happen 
//hence this determination will be made a run time
//Reference variable type (Shapes circle )actually tells which all things you can access
class Main
{
    public static void main(String[] args) {
        //what type of variable and what type of method is access is depend on left of side Shapes shape
        //and when it check which one is to call it depend on right side
        //if the type of reference is parent class and object is of subclass
        //Parent obj=new child();
        //Here, which method will be called depend on new child(); this is known as upcasting
        Shapes shape=new Shapes();
        Shapes circle=new Circle();
        Square square=new Square();
        Shapes square1=new Square();
        square.area();
        square1.area();//it also call Square class area
        circle.area(); //it call the circle class area but we can't remove the area form Shape class because Shape class 
                       //don't know what is below it but which one to access that is determined by the java at runtime 
                       //using dynamic method dispatch and it depend on the type of object that is being created
    }
}
