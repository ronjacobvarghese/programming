package package1;

public class Shape {
    int n;
    public Shape(int n){
        this.n=n;
    }
    public void ViewSquare(int l){
        Square a=new Square(l);
        System.out.println("The area of the square is "+a.area());
        System.out.println("The perimeter of the square is "+a.perimeter());
    }
    public void ViewRectangle(int l,int b){
        Rectangle a=new Rectangle(l,b);
        System.out.println("The area of the rectangle is "+a.area());
        System.out.println("The perimeter of the rectangle is "+a.perimeter());
    }

}
class Square extends Shape{
    int l;
    Square(int l){
        super(4);
        this.l=l;
    }
    public int area(){
        return l*l;
    }
    public int perimeter(){
        return 4*l;
    }

}
class Rectangle extends Shape{
    int l,b;
    Rectangle(int l,int b){
        super(4);
        this.l=l;
        this.b=b;
    }
    public int area(){
        return l*b;
    }
    public int perimeter(){
        return 2*(l+b);
    }

}

