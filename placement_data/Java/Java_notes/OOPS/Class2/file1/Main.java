//when we have 2 class that are of same name so we can't make it on one file so here packages are come into picture
//we can make 2 class on different packages and use them
//packages are just a folder
//if we have file in the same folder so we have no need to import it
//when a member is declare as static it can be accessed before the any object of the class is created and without referencing to the object
//static variable is not depend upon the object
//main is static because main is the first thing that are start and without creating object how can i call main so main is static so it is not depend upon the object 
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
    // void greeting()
    // {
    //     System.out.println("Hello world");
    // }
    static void greeting()
    {
        System.out.println("Hello world");
    }
    static void fun()
    {
        //when greeting method is non-static
        //greeting();//you can't use this because it requires an instance
        //but the function you are using it in does not depend on instances
    
        // //you can't access non-static  stuff without referencing their instances in a static context
        // //hence, here I am referencing it
        // Main obj=new Main();
        // obj.greeting();

        //it work fine when greeting is static
        greeting();
    }
    void fun2()
    {
        greeting();
    }
    public static void main(String[] args)
    {
        A obj=new A("sumit");
        System.out.println(obj); //it give some HashCode
        Human sumit=new Human(22,"sumit",5000,false);
        Human amit=new Human(23,"Amit",10000,false);

        //both statements give same output 1 because they both are diff object and population for both the objects are diff because population is not a static
        System.out.println(sumit.population);
        System.out.println(amit.population);
        //after making population as static it increment the value of population when we call the constructor
        // System.out.println(sumit.population);
        // System.out.println(amit.population);
        // use static variables with the class name
        System.out.println(Human.population);
        System.out.println(Human.population);

        //inside static method we can't use anything that are non-static
        //greeting();
        //after making greeting as static 
        greeting();
    }

}