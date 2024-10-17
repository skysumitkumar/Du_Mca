package Inheritance.file5;
//multiple inheritance is not supported in java
//like when one class A has variable n=5 and another class B has variable n=10 and class C inherit class A and class B and now C.n ? now it confuse when it call so multiple inheritance is not possible in java
//we can do this multiple inheritance with the help of interface

//Hybrid inheritance
//java do't support Hybrid inheritance
//it just like A is parent class and B,C are child that extends A and D is class that extends B,C class so this not possible in java
//we can do it with interface
public class Main {
    public static void main(String[] args) {
        Box box1=new BoxWeight(2,3,4,5); //its type is BoxWeight but it references to the type Box
        System.out.println(box1.w);
    }
}
