// class->logical construct
// Object->physical relity that accutually occupies space in the memory
// variable inside the object is called as instance object
class Student
{
    int rno; //defaut value 0
    String name; //defaut value null
    float marks; //defaut value 0.0
}
public class Main
{
    public static void main(String[] args)
    {
        //Array of 5 size
        int numbers[]=new int[5];
        //String array of 5 size
        String[] names=new String[5];
        //Array of 5 size of rno
        int[] rno=new int[5];
        //Array of 5 size of 5 names
        String[] name=new String[5];
        float[] marks=new float[5];
        Student[] students=new Student[5];
        //just declaring
        Student Sumit;
        // new Student();-.dynamically allocates memory and returns reference variable to it it created in heap
        // all class object in java must be allocate in heap
        Sumit=new Student();
        //we can't call an object reference to point a arribratery location or manipulate it
        System.out.println(Sumit.name);
        Sumit.name="Sumit";
        Sumit.marks=7.8f;
        Sumit.rno=58;
        System.out.println(Sumit.name);
    }

}