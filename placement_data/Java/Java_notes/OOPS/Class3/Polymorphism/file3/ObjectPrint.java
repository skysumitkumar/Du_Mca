package file3;

public class ObjectPrint {
    int num;
    public ObjectPrint(int num)
    {
        this.num=num;
    }
    @Override
    public String toString()
    {
        return "Objectprint{" +
                "num=" + num + 
                '}';
    }
    public static void main(String[] args) {
        ObjectPrint obj=new ObjectPrint(54);
        System.out.println(obj);//it call the toString method of Object class
    }
}
