import java.util.Scanner;
import package1.Shape;
import package1.package2.Triangle_Circle;
public class q3 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the no of sides:");
        int n=scan.nextInt();
        Shape obj=new Shape(n);
        Triangle_Circle obj1=new Triangle_Circle();
        if(n==0){
            System.out.println("Enter the radius of the circle:");
            int r=scan.nextInt();
            obj1.ViewCircle(r);
        }
        else if(n==3){
            System.out.println("Enter the length of the three sides of the triangle:");
            int a=scan.nextInt();
            int b=scan.nextInt();
            int c=scan.nextInt();
            System.out.println("Enter the height of the triangle:");
            int h=scan.nextInt();
            obj1.ViewTriangle(a,b,c,h);
        }
        else if (n==4){
            System.out.println("Is the following shape a Square(0/1):");
            int l=scan.nextInt();
            if(l==1){
                System.out.println("Enter the side of the square:");
                int a=scan.nextInt();
                obj.ViewSquare(a);
            }
            else{
                System.out.println("Enter the length of the rectangle:");
                int a=scan.nextInt();
                System.out.println("Enter the breath of the rectangle:");
                int b=scan.nextInt();
                obj.ViewRectangle(a,b);
            }
        }
    }
    
}
