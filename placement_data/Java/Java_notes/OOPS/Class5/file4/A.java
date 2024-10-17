package file4;

public interface A {
    //it provide a mean by interface could be expended without braking existing code
   default void fun(){
        System.out.println("I am in A");
   }
}
