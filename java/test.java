import java.util.*;
public class test {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        String s=scan.next();
        int l=s.length();
        int a[]=new int[l];
        a[0]=s.charAt(0)-96;
        for(int i=1;i<l;i++){
            if(s.charAt(i)==s.charAt(i-1)){
                a[i]+=a[i-1]+s.charAt(i)-96;
            }
            else{
                a[i]=s.charAt(i)-96;
            }
        }
        System.out.println(Arrays.toString(a));
        int n=scan.nextInt();
        int p=0;
        for(int i=0;i<n;i++){
            int k=scan.nextInt();
            for(int j=0;j<l;++j){
                if(k==a[j]) {System.out.println("Yes");p=0;break;}
                else if(k!=a[j]) p+=1;
            }
            if (p>0) System.out.println("NO");
            p=0;
        }
    }
}