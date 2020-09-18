import java.util.*;
public class q5 {
    static int totala = 0, totalb = 0, Heavy = 0, Medium = 0, twowheelers = 0, lightvehicles = 0;
    static int Heavypay = 0, Mediumpay = 0, twopay = 0;
    String a;

    static void countOfVehicles(String a) {
        if (!(a.equalsIgnoreCase("Light")))
            totala += 1;
        else
            totalb += 1;
    }

    static void countOfEach(String a) {
        if (a.equalsIgnoreCase("Heavy"))
            Heavy += 1;
        else if (a.equalsIgnoreCase("Medium"))
            Medium += 1;
        else if (a.equalsIgnoreCase("2"))
            twowheelers += 1;
    }

    static void moneyCalculate(String a) {
        if (a.equalsIgnoreCase("Heavy"))
            Heavypay += 50;
        else if (a.equalsIgnoreCase("Medium"))
            Mediumpay += 20;
        else if (a.equalsIgnoreCase("2"))
            twopay += 10;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (true) {
            System.out.println("Heavy-Heavy vehicles,Medium-medium vehicles,Light-Light vehicles,2-two wheelers,q-quit");
            System.out.print("enter the vehicle type = ");
            String x = in.nextLine();
            if (x.equalsIgnoreCase("q"))
                break;
            else {
                countOfVehicles(x);
                countOfEach(x);
                moneyCalculate(x);
            }
        }
        System.out.println("1)Total number of vehicles passing the bridge " + totala);
        System.out.println("2)Total Amount of money collected for all the vehicles per day = " + (Heavypay + Mediumpay + twopay));
        System.out.println("3)Total number of vehicles who passed without paying toll = " + totalb);
        System.out.println("4)");
        System.out.println("Total number of Heavy vehicles = " + Heavy);
        System.out.println("Total number of Medium vehicles = " + Medium);
        System.out.println("Total number of Two wheelers = " + twowheelers);
        System.out.println("5)");
        System.out.println("Money collected from Heavy vehicles = " + Heavypay);
        System.out.println("Money collected from Medium vehicles = " + Mediumpay);
        System.out.println("Money collected from Two Wheelers = " + twopay);
        System.out.println("6)The lose of amount on that day as some vehicles did not pay = " + totalb);
    }
}
