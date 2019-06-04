import java.util.Scanner;

public class Midterm {
    public static void main(String[] args) {

        /*
         * #3 int $x = 2;
         *
         * while ($x <= 3) { int _y = 1; while (_y <= 3) { System.out.println($x); _y++;
         * } // System.out.println(y); $x++; }
         */

        /*
         * #11 String name = "Johnson"; System.out.println(name.charAt(4));
         */

        /*
         * #12 double speed; Scanner console = new Scanner(System.in); speed =
         * console.nextDouble(); System.out.println(speed);
         */

        // # 13 System.out.println((11) * (43 % 10));

        /*
         * #14 int x = 5; int y = 8; int z = 0; while (y < 20) { z = x + y; x = y; y =
         * z; System.out.println(y); }
         */

        /*
         * #15 int x = 4; int y = -3; int z = 4;
         *
         * System.out.println(x – z != 0);
         */

        /*
         * #16 double bodyTemp = 37.05; System.out.println(bodyTemp);
         */

        /// #18
        // String item1 = "poop";
        // String item2 = "mobster";

        // System.out.println(!item1.equalsIgnoreCase(item2));

        /*
         * #20 double x = 0; double y = 4; double z = Math.sqrt(y);
         *
         * System.out.println(z);
         */

        /*
         * #21 String stringVal = "20"; int intVal = Integer.parseInt(stringVal);
         *
         * System.out.println(intVal / 10);
         */

        // #22

        // for (int i = 1; i <= 6; i++) {

        // int num = (18 * (i - 1)) - 4;

        // System.out.println(num);
        // }

        /*
         * #24 int max = 10; while (max < 10) { System.out.println(max); max--; }
         */

        // #25
        // int x = 250; while (x % 3 != 0) { System.out.println(x); }

        // #26
        int x = 2;
        while (x < 200) {
            System.out.print(x + " ");
            x *= x;
        }

        // #27 System.out.println("This is a test\nof the emergency broadcast system.");

        // #28? System.out.println("Samsonite! I was way off!");

        // #29 System.out.println("This is a string");

        // #30 System.out.println("Whew! I'm glad this exam is over");

    }
}