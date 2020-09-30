public class q4 {
    double function(double d) {
        return d *= d;
    }

    int function(int i) {
        return function(i *= i);
    }

    float function(float f) {
        return function(f *= f);
    }

    public static void main(String[] args)
    {
        q4 main = new q4();
         
        System.out.println(main.function(100));
    }
}