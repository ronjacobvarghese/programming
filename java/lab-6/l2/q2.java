import java.util.*;
abstract class Marks{
    abstract float getPercentage();
}
class A extends Marks{
    int mark1;
    int mark2;
    int mark3;
    A(int m1,int m2,int m3){
        mark1=m1;
        mark2=m2;
        mark3=m3;
    }
    float getPercentage(){
        float percentage=(mark1+mark2+mark3)/3;
        return percentage;
    }
}
class B extends Marks{
    int mark1;
    int mark2;
    int mark3;
    int mark4;

    B(int m1,int m2,int m3,int m4){
        mark1=m1;
        mark2=m2;
        mark3=m3;
        mark4=m4;
    }
    float getPercentage(){
        float percentage=(mark1+mark2+mark3+mark4)/4;
        return percentage;
    }
}

public class q2 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int[] a=new int[3];
        for(int i=1;i<4;i++){
            System.out.println("Enter the "+i+"th mark of student A:");
            a[i-1]=scan.nextInt();
        }
        A student1=new A(a[0],a[1],a[2]);
        System.out.println("The percentage of student A:"+student1.getPercentage()+"%");
        int[] b=new int[4];
        for(int i=1;i<5;i++){
            System.out.println("Enter the "+i+"th mark of student B:");
            b[i-1]=scan.nextInt();
        }
        B student2=new B(b[0],b[1],b[2],b[3]);
        System.out.println("The percentage of student B:"+student2.getPercentage()+"%");
    }
}