import java.util.*;
public class q1 {
    boolean binarysearch(int a[], int l, int r, int x) 
    { 
        if (r >= l) { 
            int mid = l + (r - l) / 2; 
            if (a[mid] == x) 
                return true; 
            if (a[mid] > x) 
                return binarysearch(a, l, mid - 1, x); 
        return binarysearch(a, mid + 1, r, x); 
        } 
        return  false; 
    } 
    public static void main(String[] args){
        Scanner scan= new Scanner(System.in);
        q1 search=new q1(); 
        String s=scan.next();
        int n=scan.nextInt();
        int l=s.length();
        int b[]=new int[l];
        b[0]=s.charAt(0)-96;
        for(int i=1;i<l;++i){
            if (s.charAt(i)==s.charAt(i-1)) b[i]=s.charAt(i)+b[i-1]-96;
            else b[i]=s.charAt(i)-96;
        }
        Arrays.sort(b);
        System.out.println(Arrays.toString(b));
        for (int i=0;i<n;++i){
            int x=scan.nextInt();
            if (search.binarysearch(b,0,l-1,x)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
