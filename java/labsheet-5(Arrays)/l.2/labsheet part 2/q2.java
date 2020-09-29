import java.util.Scanner;

public class q2 {

    int[] myList;

    q2(int size)
	{
		myList=new int[size];
		Scanner in = new Scanner(System.in);  
		System.out.println("Enter the elements");
		for (int i=0; i<size; i++) myList[i] = in.nextInt();
	}

    void Display() {
        for (int i = 0; i < myList.length; i++)
            System.out.println(myList[i]);

    }
    void oddsum(){
        int s=0;
        for(int i=0;i<myList.length;i+=1) s+=myList[i]%2==1?myList[i]:0;
        System.out.println("The odd sum of the array is:"+s);
    }
    public static void main(String[] args){
        System.out.println("This is the second question:");
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the length");
        int n=scan.nextInt();
        q2 a=new q2(n);
        a.oddsum();

    }

}
