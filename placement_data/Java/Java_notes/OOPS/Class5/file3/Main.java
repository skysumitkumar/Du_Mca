package file3;

public class Main implements B{
    //access modifier or override methods should be same or better of the parent
    @Override
    public void fun() {
        
    }
    @Override
    public void greet() {
        
    }
    public static void main(String[] args) {
        Main obj=new Main();
        //static method
        A.greeting();
    }
    
}
