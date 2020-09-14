import java.util.*;
public class q2 {
    String func(String a){
        int x=a.charAt(0);
        int l=a.length();
        int y=a.charAt(l-1);
        int i=1,j=l-2;
        while(i<=j){
            if (Math.abs(a.charAt(i)-x)==Math.abs(a.charAt(j)-y)){
                x=a.charAt(i);
                y=a.charAt(j);
                i+=1;j-=1;
            }
            else return "Not Funny";
        }
        return "Funny";
    }
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        q2 obj=new q2();
        String a=scan.next();
        System.out.println(obj.func(a));
    }
    
}
