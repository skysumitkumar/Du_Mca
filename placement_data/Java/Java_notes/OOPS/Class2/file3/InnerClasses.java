
//class inside another class
//outside classes cant't be static
//inner classes can be static
//static are not depend on object and object are created at runtime so static stuff are resolve during compile time
public class InnerClasses {
    //it is depend on the InnerClasses class so it give error so we have to make object of InnerClasses or we can make Test as static 
    // class Test
    // {
    //     String name;
    //     public Test(String name)
    //     {
    //         this.name=name;
    //     }
    // }
    
    
    //after making it static is not depend on objects of the InnerClasses but Main and Test have instance of each other
    static class Test
    {
        String name;
        public Test(String name)
        {
            this.name=name;
        }
    }
    
    public static void main(String[] args) {
        // //it cant work because Test class is not a static class that depend uppon InnerClasses
        // Test a=new Test("sumit");
        // Test b=new Test("Rahul");

        //static Test is not depend on objects of the InnerClasses but Main and Test have instance of each other
        Test a=new Test("sumit");
        Test b=new Test("Rahul");

    }
}
