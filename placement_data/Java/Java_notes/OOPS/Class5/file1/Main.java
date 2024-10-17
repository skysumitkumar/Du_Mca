package file1;
//Abstract method:-empty methods(abstract method),defined methods,variables Abstract method is method where child implement abstract method of parent
public class Main
{
    public static void main(String[] args) {
        Son son=new Son(30);
        son.career();
        Daughter daughter=new Daughter(28);
        daughter.career();
        Parent.hello();
        //Parent mom=new Parent(45);// we can't make object of abstract class

        //we can't make object of abstract class but we can make reference of abstract class
        Parent daughter1=new Daughter(52);
    }
}