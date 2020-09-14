import java.util.*;

class stack {

    Scanner scan=new Scanner(System.in);
    int i=-1;
    int n;
    int[] a;

    public stack(){

        System.out.print("Length of stack-");
        int n=scan.nextInt();
        this.n=n;
        a=new int[n];
    }
    public boolean isEmpty(){
        if(i==-1){return true;}
        else {return false;}
    }
    public boolean isFull(){
        if (i==n-1)  {return true;}
        else {return false;}
    }

    public void push(){
        if (isFull()) {System.out.println("The stack is full");}
        else{
            System.out.print("integer to insert-");
            int x=scan.nextInt();
            i+=1;a[i]=x;
        }
    }
    public void display(){
        if (isEmpty()) {System.out.println("The stack is empty");}
        else{
        for(int j=i;j>=0;--j){
            System.out.println("The "+(j+1)+" element is "+a[j]);
        }
    }
    }
    public void pop(){
        if (isEmpty()){
            System.out.println("The stack is empty");
        }
        else{
            System.out.println("The "+(i+1)+"th element "+a[i]+" is removed");
            i-=1;
        }
    }
    public void peek(){
        if(isEmpty()){System.out.println("The stack is empty");}
        else System.out.println("The last element of the stack is "+a[i]);
    }

public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    stack a=new stack();
    while (true){
        System.out.println("1-display 2-peek 3-push 4-pop 5-exit");
        int c=scan.nextInt();
        switch(c){
            case 1:a.display();break;
            case 2:a.peek();break;
            case 3:a.push();break;
            case 4:a.pop();break;
            case 5:return;
        }
    }


}

}