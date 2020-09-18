import java.util.*;

class myfunc{
    public static void func(String a) {
        String s = "";
        for (int i = 0; i < a.length(); i++) {
            if (Character.isDigit(a.charAt(i)))
                s += a.charAt(i);
            else if (Character.isAlphabetic(a.codePointAt(i)))
                s += a.charAt(i);
        }
        System.out.println("The current String is :" + s);

    }
}

public class q3 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        myfunc.func(a);

    }
}
