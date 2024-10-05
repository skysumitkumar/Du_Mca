class Student
{
    int rno;
    String name;
    float marks;
    Student()
    {
        this.rno=60;
        this.name="Amit";
        this.marks=7.9f;

    }
    //constructor that contain object
    Student(Student obj)
    {
        this.rno=obj.rno;
        this.name=obj.name;
        this.marks=obj.marks;
    }
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
        sumit=new Student(58,"sumit",7.8f);
        //make object that contain object
        Student random=new Student(sumit);
        random.name="sumit";
        random.greeting();
        random.changeName("ankit");
        random.greeting();
    }

}