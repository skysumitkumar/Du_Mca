package file3;

public interface A {
    //static interface methods should always have a body
    static void greeting()
    {
        System.out.println("Hey I am static method");
    }
    void fun();
}
