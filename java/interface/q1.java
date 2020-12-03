interface polygon{
    public void getArea();
}
class Rectangle implements polygon{
    int l,b;

    Rectangle(int l,int b){
        this.l=l;
        this.b=b;
    }
    public void getArea(){
        System.out.println("The given Area is "+l*b);
    }

}
public class q1{
    public static void main(String[] args){
        Rectangle r=new Rectangle(4,5);
        r.getArea();
    }
}