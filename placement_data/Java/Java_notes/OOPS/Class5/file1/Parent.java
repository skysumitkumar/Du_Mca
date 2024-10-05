package file1;
//Abstract method:-empty methods(abstract method),defined methods,variables Abstract method is method where child implement abstract method of parent
//when we declare abstract method so we have to make class also as abstract
//we can also have variables in abstract class
//we can make constructor of a abstract class
//we can't create object of abstract class
//we can't have final abstract class
//abstract class don't support multiple inheritance
public abstract class Parent {
    int age;
    // //we also use this but then we can't assign value in Parent constructor because it is final
    // final int VALUE=90;
    final int VALUE;
    public Parent(int age)
    {
        this.age=age;
        VALUE=5546;
    }
    // //we can't create abstract static method
    // //we cant create abstract constructor
    // abstract Parent()
    // {

    // }
    static void hello()
    {

    }
    //abstract class also contain normal method
    void normal()
    {
        System.out.println("this is a normal method");
    }
    //abstract method
    abstract void career();
    abstract void partner();
}
