class Student
{
    int rno;
    String name;
    float marks;
    //call constructor with other constructor
    Student()
    {
        this(29,"rahul",89.5f);

    }
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
        Student random=new Student();
        random.name="sumit";
        System.out.println(random.marks);
        random.greeting();
        random.changeName("ankit");
        random.greeting();
    }

}