
public class Human {
    int age;
    String name;
    int salary;
    boolean married;
    //long population;
    static long population;
    static void message()
    {
        System.out.println("Hello i am in message");
        //we can't use this in static
        //this.age=5;
    }
    public Human(int age,String name,int salary,boolean married)
    {
        this.age=age;
        this.name=name;
        this.salary=salary;
        this.married=married;
        //this.population+=1;
        //static is common to all the objects
        Human.population+=1; //static variable is used with the class name
    }
}
