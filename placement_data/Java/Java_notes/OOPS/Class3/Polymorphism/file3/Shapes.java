package file3;
public class Shapes {
    //we can't inherit final method
    //dynamic method resolution it happens at runtime after the compilation and bytecode everything is done 
    //and programming is running that is overriding is actually determines which one to run hence it also known as late-binding
    //final method can't be override a call to be resolve at compile time only so it is early binding
    //Early binding
    // final void area()
    // {
    //     System.out.println("I am in shapes");
    // }
    void area()
    {
        System.out.println("I am in shapes");
    }
}
