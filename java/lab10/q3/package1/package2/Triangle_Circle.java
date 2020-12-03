package package1.package2;
import package1.Shape;
public class Triangle_Circle {
    public void ViewCircle(int r){
        Circle a=new Circle(r);
        System.out.println("The area of the circle is "+a.area());
        System.out.println("The perimeter of the cirle is "+a.perimeter());
    }
    public void ViewTriangle(int a,int b,int c,int h){
        Triangle d=new Triangle(a,b,c,h);
        System.out.println("The area of the triangle is "+d.area());
        System.out.println("The perimeter of the triangle is "+d.perimeter());
    }
}
class Triangle extends Shape{
    int a,b,c,h;
    Triangle(int a,int b, int c, int h){
        super(3);
        this.a=a;
        this.b=b;
        this.c=c;
        this.h=h;
    }
    public double area(){
        return b*h/2;
    }
    public int perimeter(){
        return a+b+c;
    }
}
class Circle extends Shape{
    int r;
    Circle(int r){
        super(0);
        this.r=r;
    }
    public double perimeter(){
        return 3.14*2*r;
    }
    public double area(){
        return 3.14*r*r;
    }


}
