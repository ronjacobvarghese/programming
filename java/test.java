import java.util.*;

public class test {
    void test() {
        System.out.println("No parameters");
    }

    // Overload test for two integer parameters.
    void test(int a, int b) {
        System.out.println("a and b: " + a + " " + b);
    }

    // overload test for a double parameter
    void test(double a) {
        System.out.println("Inside test(double) a: " + a);
    }

    public static void main(String[] args) {
        test ob = new test();
        int i = 250;
        ob.test();
        ob.test(1, 2);
        ob.test(i); // this will invoke test(double)
        ob.test(1.2); // this will invoke test(double)
    }
}