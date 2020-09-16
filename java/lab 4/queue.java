import java.util.*;
public class queue {
    Scanner scan=new Scanner(System.in);
    int a[];
    int i;
    int j;
    int n;

    public queue(){
        int n;
        System.out.println("The length of the queue is:");
        n=scan.nextInt();
        a=new int[n];
        i=-1;j=-1;
        this.n=n;
    }

    public boolean isfull(){
        if(j==n-1){System.out.println("The queue is full") ;return true;}
        return false;
    }
    public boolean isEmpty(){
        if(i==-1){System.out.println("The queue is empty");return true;}
        return false;
    }
    public void enqueue(int n){
        if (isfull()) return;
        else if(i==-1){i=j=0;a[j]=n;}
        else{j+=1;a[j]=n;}
    }
    public void dequeue(){
        if(isEmpty()) return;
        else if(i==j) i=j=-1;
        else i+=1;
    }
    public void display(){
        if (isEmpty()) return;
        System.out.println("The current queue is:");
        for(int p=i;p<=j;p++){
            System.out.print(a[p]+" ");
        }
        System.out.println();
    }
    public void peekfront(){
        if(isEmpty()) return;
        System.out.println("The element in the front is: "+a[i]);
    }
    public void peekrear(){
        if (isEmpty()) return;
        System.out.println("The element in the rear is: "+a[j]);
    }

    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        queue obj=new queue();
        while(true){
            System.out.println("1:enqueue,2:dequeue,3:display,4:peekrear,5:peekfront,6:exit");
            int c=scan.nextInt();
            switch(c){
                case 1:System.out.println("Enter the no to be inserted:");int n=scan.nextInt();obj.enqueue(n);break;
                case 2:obj.dequeue();break;
                case 3:obj.display();break;
                case 4:obj.peekrear();break;
                case 5:obj.peekfront();break;
                case 6:return;
            }
        }


    }
}
