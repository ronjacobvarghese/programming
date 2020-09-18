import java.util.*;

class myfunc {
    public static void func(String a) {
        int l = a.length();
        int i = 0, j = l - 1;
        while (i < j) {
            if (a.charAt(i) != a.charAt(j)) {
                System.out.println("The string is not a palindrome");
                return;
            }
            i += 1;
            j -= 1;
        }
        System.out.println("The string is a palindrome");

    }
}

public class q2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        myfunc.func(a);
    }
}
