

public class Main {
    public static void main(String[] args) {
        //it can't work because constructed is private
        //Singleton obj=new Singleton();

        Singleton obj=Singleton.getInstance();

        Singleton obj1=Singleton.getInstance();
        //these both reference variables are pointing to just one object
    }
}
