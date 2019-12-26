public class Scopefun {
    public static void main(String[] args) {
        int number = 5;
        System.out.println(number);
    }

    public static boolean isOdd(int num) {
        boolean odd = false;

        if (num % 2 == 1) {
            odd = true;
        }

        return odd;
    }

}