package access;
//packages are of two types user-defined and in-build
//inbuilt:-lang,io,util(data structure),applet,awt,net these all are in java folder
public class A
{
    //if we can't specify any access specifier so it is default so we can't access in diff package but we can access it in same package
    private int num;
    protected String name;
    int[] arr;
    public A()
    {

    }
    public A(int num,String name)
    {
        this.num=num;
        this.name=name;
        this.arr=new int[34];
    }
    public int getNum()
    {
        return num;
    }
    public void setNum(int num)
    {
        this.num=num;
    }
    
}