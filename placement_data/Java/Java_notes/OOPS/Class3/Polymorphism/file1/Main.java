package file1;
//Types of Polymorphism
//compile time/static polymorphism
//same name but type ,argument ,return types,ordering can be different
//eg:-multiple constructor

//runtime polymorphism
//achieved by method overriding
class Main
{
    public static void main(String[] args) {
        //what type of variable and what type of method is access is depend on left of side Shapes shape
        //and when it check which one is to call it depend on right side
        Shapes shape=new Shapes();
        Circle circle=new Circle();
        Square square=new Square();
        Shapes square1=new Square();
        square.area();
        square1.area();//it also call Square class area
    }
}
