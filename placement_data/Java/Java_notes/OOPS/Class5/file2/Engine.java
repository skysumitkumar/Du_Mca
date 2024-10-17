package file2;
//Interface:-they only contain abstract methods,they have interface class,by default fun are public,variable are final and static
//abstract class can provide implementation of interface but interface can't provide implementation of abstract class
//interface->class->implements
//abstract->class->extends
//interface->interface->extends
//with the help of interface we can implement multiple inheritance
public interface Engine {
    static final int PRICE=100000;
    void start();
    void stop();
    void acc();
}
