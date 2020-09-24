import java.util.Scanner;
public class Q1 {
	int Duplicate(int []a)
	{	
		int dup=0;
		for(int i=0;i<a.length;++i)
		{
			for(int j=0;j<a.length;++j)
			{
				if(a[j]==a[i] && i!=j)
					dup+=1;
			}
		}
		return (dup);	
	}
	boolean Empty(int []a)
	{
		int c=0;
		for(int i=0;i<a.length;++i)
		{
            if(a[i]!=0) return false;
        }
        return true;
	}
	int update(int []a,int m)
	{
		int c=0;
		for(int i=0;i<a.length;++i)
		{
			if (a[i]!=0)
			{
				a[i]=a[i]-m;
				c+=1;
			}
		}
		return c;
	}
	int min(int []a)
	{
		int min=100000000;
		for(int i=0;i<a.length;++i)
		{
			if (min>a[i] && a[i]!=0)
				min=a[i];
        }
        System.out.println("min="+min);
		return min;
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Q1 obj = new Q1();
		int n;
		System.out.print("Enter the size of array = ");
		n=in.nextInt();
		int [] arr = new int[n];
		System.out.print("Enter the array = ");
		for(int i=0;i<n;++i)
		{
			arr[i]=in.nextInt();
		}
        System.out.print("Output = ");
        int s=arr.length-obj.Duplicate(arr);
		for(int i=0;i<s;++i)
		{    
			if(obj.Empty(arr))
            System.out.print(obj.update(arr,obj.min(arr))+" ");
            for(int p:arr) System.out.print(p+" ");
            System.out.println();
		}		
	}
}
