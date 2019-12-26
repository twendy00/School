import java.util.Scanner;

public class test {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int rolls = Integer.parseInt(scan.nextLine());

        for (int i = 1; i <= 10; i++) {
            System.out.println(i + ":");
        }
    }
}