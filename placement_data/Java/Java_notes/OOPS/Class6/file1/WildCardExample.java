import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

// https://docs.oracle.com/javase/tutorial/java/generics/restrictions.html#createObjects

//here T should be either be Number01 its subclass
public class WildCardExample<T extends Number> {

    private Object[] data;
    private static int DEFAULT_SIZE=10;
    private int size=0; // also working as index value

    public WildCardExample() 
    {
        //we have to use Object here because it is at runtime
        data=new Object[DEFAULT_SIZE];
    }
    // //we can only pass here Number type not the subclass of Number
    // public void getList(List<Number>list)
    // {

    // }
    //wild card
    public void getList(List<? extends Integer>list)
    {

    }
    public void add(T num) 
    {
        if(isFull()) 
        {
            resize();
        }
        data[size++]=num;
    }

    private void resize() 
    {
        Object[] temp=new Object[data.length*2];

        // copy the current items in the new array
        for(int i=0;i<data.length;i++) 
        {
            temp[i]=data[i];
        }
        data=temp;
    }

    private boolean isFull() 
    {
        return size==data.length;
    }

    public T remove() 
    {
        T removed=(T)(data[--size]);
        return removed;
    }

    public T get(int index) 
    {
        return (T)data[index];
    }

    public int size() 
    {
        return size;
    }

    public void set(int index,T value) {
        data[index]=value;
    }

    @Override
    public String toString() {
        return "WildCardExample{" +
                "data=" + Arrays.toString(data) +
                ", size=" + size +
                '}';
    }

    public static void main(String[] args) {
//        ArrayList list=new ArrayList();
        WildCardExample list=new WildCardExample();
//        list.add(3);
//        list.add(5);
//        list.add(9);

//        for(int i=0;i<14;i++) 
//        {
//            list.add(2*i);
//        }

//        System.out.println(list);

        ArrayList<Integer> list2=new ArrayList<>();
//        list2.add("dfghj");

        //if we write no in place of Integer it give error
        WildCardExample<Integer> list3=new WildCardExample<>();
        for (int i=0;i<14;i++) 
        {
            list3.add(2*i);
        }

        System.out.println(list3);

    }
}