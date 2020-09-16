import java.util.*;
public class q3 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        String a=scan.next();
        String s="";
        char b[]=a.toCharArray();
        for (int i=0;i<a.length();i++){
            if(Character.isDigit(a.charAt(i))) s+=a.charAt(i);
            else if (Character.isAlphabetic(a.codePointAt(i))) s+=a.charAt(i);
        }
        System.out.println("The current String is :"+s);
    }
}
