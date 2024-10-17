package file2;

public class Main {
    public static void main(String[] args) {
        Car car=new Car();
        Engine car1=new Car();
        //car1.a;//it give error 
        car.acc();
        car.start();
        car.stop();

        Media carMedia=new Car();
        carMedia.stop();//it stop the engine so this is problem so we have make separate classes for these interfaces

        NiceCar car2=new NiceCar();
        car2.start();//Power engine start
        car2.startMusic();
        //change engine
        car2.upgradeEngine();
        car.start();//Electric engine start
    }
}
