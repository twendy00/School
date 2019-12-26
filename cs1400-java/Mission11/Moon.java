public class Moon {
    public static void main(String[] args) {
        Sailor s1 = new Sailor();
        Sailor s2 = new Sailor();

        s1.setEnergy(80);
        s1.setX(400);
        s1.setY(800);
        s2.setEnergy(50);
        s2.setX(600);
        s2.setY(900);
        System.out.println("Energy: " + s1.getEnergy());
        System.out.println("X: " + s1.getX());
        System.out.println("Y: " + s1.getY());
        System.out.println("Energy: " + s2.getEnergy());
        System.out.println("X: " + s2.getX());
        System.out.println("Y: " + s2.getY());

        // s1.hit(10);
        // System.out.println(s1.getEnergy());
        // System.out.println(s2.getEnergy());

    }

}