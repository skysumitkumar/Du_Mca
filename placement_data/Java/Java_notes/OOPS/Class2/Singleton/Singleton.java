
//only one instance of the class
//if we can create only one object we should not allow anyone to call the constructor of the class
public class Singleton {
    private Singleton()
    {
        
    }
    private static Singleton instance;

    public static Singleton getInstance()
    {
        //check whether 1 obj only is created or not
        if(instance==null)
        {
            instance=new Singleton();
        }
        return instance;
    }
}
