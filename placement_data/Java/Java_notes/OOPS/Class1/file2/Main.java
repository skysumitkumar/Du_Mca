class Student
{
    int rno;
    String name;
    float marks;
    //here we perform function overloding
    //default constructor
    Student()
    {
        this.rno=60;
        this.name="Amit";
        this.marks=7.9f;

    }
    // parametrize constructor
    Student(int rno,String name,float marks)
    {
        this.rno=rno;   //this is replaced by the reference which is sumit 
        this.name=name;
        this.marks=marks;
    }
    void greeting()
    {
        System.out.println("Hello! My name is "+ this.name);
    }
    void changeName(String name)
    {
        this.name=name;
    }
}
public class Main
{
    public static void main(String[] args)
    {
        int numbers[]=new int[5];
        String[] names=new String[5];
        int[] rno=new int[5];
        String[] name=new String[5];
        float[] marks=new float[5];
        Student[] students=new Student[5];
        Student sumit;
        // this call paramatrize constructor
        sumit=new Student(58,"sumit",7.8f);
        sumit.name="sumit";
        sumit.greeting();
        sumit.changeName("ankit");
        sumit.greeting();
    }

}