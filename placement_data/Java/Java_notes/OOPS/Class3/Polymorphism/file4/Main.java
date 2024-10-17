package file4;
//static method can be inherit but can't be overridden
//because Override depend on the object but static doesn't depend on the object that is why static method can't be overridden
public class Main {
    public static void main(String[] args) {
        Box box1=new Box(1,2,3);
        //box1.greeting();//static method doesn't depend on the object

        Box box2=new BoxWeight();
        //althought static method is being inherited there is no point to override in child class because the method in the parent class is always run no matter which object you call it because it not depend on object it is static that is the reason that static method in class BoxWeight is not called
        box2.greeting(); //it call Box greeting
    }
}
