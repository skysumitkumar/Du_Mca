package file2;
import access.A;
public class Main extends A{
    public Main(int num, String name) {
        
    }

    public static void main(String[] args) {
        //if we can't give public to the super class constructor it give error because we can't access it to the diff package
        A a=new A(10,"sumit");
        a.getNum();
    }
}
//this is sub-class  
class B extends Main{
    public B(int num,String name)
    {
        super(num,name);
    }
    public static void main(String[] args) {
        B obj=new B(45,"sumit");
        //here we access the protected variable name in diff package in sub class
        String n=obj.name;

        //check obj is instanceof A or not it give boolean value
        System.out.println(obj instanceof A);
    }
}
