package file2;
import java.util.*;
import java.lang.*;

public class InBuiltPackage {
    int num;
    String name;
    public InBuiltPackage(int i) {
        this.num=i;
     }
    public InBuiltPackage(int i,String name) {
       this.num=i;
       this.name=name;
    }

    @Override
    public int hashCode() {
        return super.hashCode();
    }

    @Override
    public boolean equals(Object obj) {
        return super.equals(obj);
    }
    
    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    @Override
    public String toString() {
        return super.toString();
    }

    public static void main(String[] args) {
        InBuiltPackage obj=new InBuiltPackage(34,"sumit");
        InBuiltPackage obj1=new InBuiltPackage(40,"harsh");  
        InBuiltPackage obj2=new InBuiltPackage(40);
        InBuiltPackage obj3=new InBuiltPackage(40);
        //they both give diff hashCode value      
        System.out.println(obj2.hashCode());
        System.out.println(obj3.hashCode());
        // if(obj<obj1) //compiler confuse to compare the int value of string value
        // {
        //     System.out.println("obj is less than obj1");
        // }
        if(obj==obj1)//this check these two references are pointing to the same object or not
        {
            System.out.println("obj is less than obj1");
        }
        if(obj.equals(obj1))
        {
            System.out.println("obj is less than obj1");
        }

        //to find the class of reference
        System.out.println(obj.getClass());
    }
}
