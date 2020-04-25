import java.util.Scanner;
import java.math.*;

public class jav {
    public static void main(String[] args) {
        int x, n;
        float y;
        boolean vdd;
        jav j = new jav();

        Scanner soVem = new Scanner(System.in);
        n = soVem.nextInt();
        while (n-- > 0) {
            vdd = true;
            x = soVem.nextInt();
            y = (float)Math.sqrt(x);
            for (int a = 2; a <= y; a++)
                if (x % a == 0)
                    vdd = false;
            
            if (vdd)
                System.out.print("Prime\n");
            else
                System.out.print("Not Prime\n");
        }
    }
}