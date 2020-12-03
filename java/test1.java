import java.util.*;

class exceptionMain extends n
{
    exceptionMain(String message){
        super(message);
    }
}
class heavy extends exceptionMain{
    heavy(){
        super("The box is heavy");
    }
    heavy(String message){
        super(message);
    }
}
class light extends exceptionMain{
    light(){
        super("The box is light");
    }
    light(String message){
        super(message);
    }
}

public class test1 {
    public static void test(int n) throws light,heavy{
        if(n>10){
            throw new heavy();
        }
        if(n<5) throw new light();
    }
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        try{
            try{
                n=7/0;
                System.out.println("The box is just right");
            }

            catch(ArithmeticException e){
                System.out.println(e.getMessage());
            }
        }
        catch(Exception e){
            System.out.println("Another exception");
        }
    }
}
