package Inheritance.file2;

//inheritance
//polymorphism
//encapulation
//abstraction
 
//inheritance
//child class is inherit property of parent class
public class Main {
    public static void main(String[] args) {
        //reference type box5 and make object of type BoxWeight
        //it is important to understand it is actually the type of reference variable not the type of object that determine 
        //what member can be access this is reference type of Box and it is referencing to the object of type BoxWeight
        //Here all the member of Box type that we can access here
        Box box1=new BoxWeight(2,3,4,5); //its type is BoxWeight but it references to the type Box
        System.out.println(box1.w);
        //when a reference to subclass object is assigned to a superclass reference variable like this example we can only have access to only those part of object that are define in the superclass 
        // System.out.println(box5.weight);  //error

        //there are variable in both parent and child classes 
        //you are given access to the variable that are in reference type i.e BoxWeight
        //hence you should have access to weight variable
        //this also means that the ones you are trying to access should be initialized
        //but here when the obj itself is of type parent class how will you call the constructor
        //that is why error
        // BoxWeight box2=new Box(1,2,3,4); //error
    }
}
