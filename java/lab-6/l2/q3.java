import java.util.Scanner;

abstract class Shape {
    abstract void RectangleArea(double l, double b);

    abstract void SquareArea(double s);

    abstract void CircleArea(double r);
}

class Area extends Shape{
    void RectangleArea(double l, double b) {
        double area = l * b;
        System.out.println("Area of Rectangle: " + area);
    }

    void SquareArea(double s) {
        double area = s * s;
        System.out.println("Area of Square: " + area);
    }

    void CircleArea(double r) {
        double area = 3.14 * r * r;
        System.out.println("Area of Circle: " + area);
    }
}

public class q3 {
    public static void main(String args[]) {
        double a, b, c, d;
        Area area = new Area();
        Scanner get = new Scanner(System.in);
        System.out.print("\nEnter Length & Breadth of Rectangle: ");
        a = get.nextDouble();
        b = get.nextDouble();
        area.RectangleArea(a, b);
        System.out.print("Enter Side of a Square: ");
        d = get.nextDouble();
        area.SquareArea(d);
        System.out.print("Enter Radius of Circle: ");
        c = get.nextDouble();
        area.CircleArea(c);
        get.close();
    }
}
    
