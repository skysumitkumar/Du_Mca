package file2;

public class PowerEngine implements Engine {
    @Override
    public void start() {
        System.out.println("Start the PowerEngine");
    }
    @Override
    public void stop() {
        System.out.println("Stop the PowerEngine");
    }
    @Override
    public void acc() {
        System.out.println("Acc the PowerEngine");
    }
}
