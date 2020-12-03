import java.util.*;


class Vehicle{
    static int no;
    String model;
    double price;
    double weight;
    String type;


    Vehicle(String model,double price,double weight,String type)
    {
        this.model=model;
        this.price=price;
        this.weight=weight;
        this.type=type;
    }
    Vehicle(RoadVehicles a){
        model=a.model;
        price=a.price;
        weight=a.weight;
        type=a.type;
        no+=1;
    }

    Vehicle(Waterborne_vessels a){
        model=a.model;
        price=a.price;
        weight=a.weight;
        type=a.type;
        no+=1;
    }
    void Drive(){
        System.out.print("Not Drivable in current state->");
    }


    
    static void Display(){
        System.out.println("The total no of vehicles registered:"+no/2);
    }
}
class RoadVehicles extends Vehicle{
    static int road_no;
    int mileage;
    String license;
    String color;
    
    RoadVehicles(String model,double price,double weight,int mileage,String license,String type,String color){
        super(model,price,weight,type);
        this.mileage=mileage;
        this.license=license;
        this.color=color;
        road_no+=1;
    }
    RoadVehicles(RoadVehicles a){
        super(a);
        this.mileage=a.mileage;
        this.license=a.license;
        this.color=a.color;
        road_no+=1;
    }
    static void Display_road(){
        Display();
        System.out.println("The amount of road-vehicles registered:"+road_no/2);
    }
    void Drive(){
        System.out.print("Checking the mileage on the vehicle");
    }
}
class Two_wheelers extends RoadVehicles{
    String source;
    int height;
    String ABS;

    Two_wheelers(String model,double price,double weight,int mileage,String license,String color,String source,String type,String ABS){
        super(model,price,weight,mileage,license,color,type);
        this.source=source;
        this.height=height;
        this.ABS=ABS;
    }
    Two_wheelers(RoadVehicles a,String source,int height,String ABS){
        super(a);
        this.source=source;
        this.height=height;
        this.ABS=ABS;
    }
        
    void stats(){
        System.out.println("\nThe model:"+model+"\nVehicle:"+type+"\nPrice:"+price+"\nThe weight of the vehicle:"+weight);
        System.out.println("The mileage:"+mileage+"\nThe license number:"+license+"\nThe color:"+color);
        System.out.println("fuel-type:"+source+"ABS  :"+ABS+"\nHeight:"+height);
    }

    void Drive(){
        System.out.print("Testing all road capabilities,testing balance of the vehicles due to its height to weight ratio");
    }

}
class Four_wheelers extends RoadVehicles{
    int seats;
    String categories;
    int maxspeed;
    

    Four_wheelers(String model,double price,double weight,int mileage,String license,String color,int seats,String categories,int maxspeed,int height,String type){
        super(model,price,weight,mileage,license,color,type);
        this.seats=seats;
        this.maxspeed=maxspeed;
        this.categories=categories;
    }
    Four_wheelers(RoadVehicles a,int seats,int maxspeed,String categories){
        super(a);
        this.seats=seats;
        this.maxspeed=maxspeed;
        this.categories=categories;
    }
    void stats(){
        System.out.println("\nThe model:"+model+"\nVehicle:"+type+"\nPrice:"+price+"\nThe weight of the vehicle:"+weight);
        System.out.println("The mileage:"+mileage+"\nThe license number:"+license+"\nThe color:"+color);
        System.out.println("The no of seats:"+seats+"\nMaxspeed of vehicle:"+maxspeed+"Category:"+categories);
    }
    void Drive(){
        System.out.print("Checking all capabilities on road and observing time it takes to reach from 0-60mph");
    }
}
class Waterborne_vessels extends Vehicle{
    static int water_no;
    int crew_workers;
    int passenger_cap;
    double nautic_miles;

    Waterborne_vessels(String model,double price,double weight,String type,int crew_workers,int passenger_cap,double nautic_miles){
        super(model,price,weight,type);
        this.crew_workers=crew_workers;
        this.passenger_cap=passenger_cap;
        this.nautic_miles=nautic_miles;
        water_no+=1;
    }
    Waterborne_vessels(Waterborne_vessels a){
        super(a);
        this.crew_workers=a.crew_workers;
        this.passenger_cap=a.passenger_cap;
        this.nautic_miles=a.nautic_miles;
        water_no+=1;
    }

    static void Display_water(){
        System.out.println("The amount of water-vehicles registered:"+water_no/2);
    }
    void Drive(){
        System.out.println("Calculating the buoyant force,nautic miles and no of crew_members required for controlling the ship");
    }
}
class Large_vessels extends Waterborne_vessels{
    int tonage;
    String purpose;
    int length;


    Large_vessels(String model,double price,double weight,String type,int crew_workers,int passenger_cap,double nautic_miles,int length,int tonage,String purpose){
    super(model,price,weight,type,crew_workers,passenger_cap,nautic_miles);
    this.tonage=tonage;
    this.purpose=purpose;
    this.length=length;
    }
    Large_vessels(Waterborne_vessels a,int tonage,String purpose,int length){
        super(a);
        this.tonage=tonage;
        this.purpose=purpose;
        this.length=length;
    }

    void stats(){
        System.out.println("\nThe model:"+model+"\nVehicle:"+type+"\nPrice:"+price+"\nThe weight of the vehicle:"+weight);
        System.out.println("The minimum no of crew-members required:"+crew_workers+"\nThe maximum passenger capacity:"+passenger_cap+"\nThe nautic_miles of the vehicle:"+nautic_miles);
        System.out.println("The total weight the ship can handle:"+tonage+"\nThe purpose for the ship:"+purpose+"\nThe total length of the ship:"+length);
    }

    void Drive(){
        System.out.println("Testing maximum weight handle by checking the buoyant force to length ratio");
    }

}
class Coastal_vessels extends Waterborne_vessels{
    String categories;
    String material;

    Coastal_vessels(String model,double price,double weight,String type,int crew_workers,int passenger_cap,double nautic_miles,String categories,String material){
        super(model,price,weight,type,crew_workers,passenger_cap,nautic_miles);
        this.categories=categories;
        this.material=material;
    }
    Coastal_vessels(Waterborne_vessels a,String categories,String material){
        super(a);
        this.categories=categories;
        this.material=material;
    }
    void stats(){
            System.out.println("\nThe model:"+model+"\nVehicle:"+type+"\nPrice:"+price+"\nThe weight of the vehicle:"+weight);
            System.out.println("The minimum no of crew-members required:"+crew_workers+"\nThe maximum passenger capacity:"+passenger_cap+"\nThe nautic_miles of the vehicle:"+nautic_miles);
            System.out.println("Category:"+categories+"\nMaterial:"+material);
    }
    void Drive(){
        System.out.println("Checking the max passenger cap and durabilities of material used for the construction of the boat");
    }
}
public class q2{

    Scanner scan=new Scanner(System.in);


    RoadVehicles EnterRoad(String model,double price,double weight,String type){
        System.out.print("Mileage:");
        int mileage=scan.nextInt();
        System.out.print("License number:");
        String license=scan.next();
        System.out.print("Color:");
        String color=scan.next();
        RoadVehicles a=new RoadVehicles(model, price, weight, mileage, license, type, color);
        return a;
    }
    void EnterTwo(RoadVehicles a){
        System.out.print("Enter the type of fuel(Electrical,petrol):");
        String source=scan.next();
        System.out.print("Enter the height of the vehicle:");
        int height=scan.nextInt();
        System.out.print("ABS  :");
        String ABS=scan.next();
        System.out.println("Testing phase(Using Drive method):");
        Vehicle c=new Vehicle(a);
        Two_wheelers b=new Two_wheelers(a,source,height,ABS);
        c.Drive();
        a.Drive();
        System.out.print("->");
        b.Drive();
        b.stats();
        
        
    }
    void EnterFour(RoadVehicles a){
        System.out.print("No of seats:");
        int seats=scan.nextInt();
        System.out.print("Max Speed:");
        int maxspeed=scan.nextInt();
        System.out.print("Categories(Luxury,Supercar,Normal,Rare):");
        String categories=scan.next();
        System.out.println("Testing phase(Using Drive method):");
        Vehicle c=new Vehicle(a);
        Four_wheelers b=new Four_wheelers(a,seats,maxspeed,categories);
        c.Drive();
        a.Drive();
        System.out.print("->");
        b.Drive();
        b.stats();
    }
    Waterborne_vessels EnterWater(String model,double price,double weight,String type){
        System.out.print("Minimal requirement crew:");
        int crew_workers=scan.nextInt();
        System.out.print("Maximum passenger_cap:");
        int passenger_cap=scan.nextInt();
        System.out.print("Nautic_miles(mileage):");
        Double nautic_miles=scan.nextDouble();
        Waterborne_vessels a=new Waterborne_vessels(model, price, weight, type, crew_workers, passenger_cap, nautic_miles);
        return a;
    }
    void EnterOcean(Waterborne_vessels a){
        System.out.print("Enter maximum weight capacity(tonage):");
        int tonage=scan.nextInt();
        System.out.print("Purpose:");
        String purpose=scan.next();
        System.out.println("Length:");
        int length=scan.nextInt();
        System.out.println("Testing phase(Using Drive method):");
        Vehicle c=new Vehicle(a);
        Large_vessels b=new Large_vessels(a,tonage,purpose,length);
        c.Drive();
        a.Drive();
        System.out.print("->");
        b.Drive();
        b.stats();
    }
    void EnterCoastal(Waterborne_vessels a){
        System.out.print("Enter the categories(Dory,Umiak,shikara,etc):");
        String categories=scan.next();
        System.out.print("Material:");
        String material=scan.next();
        System.out.println("Testing phase(Using Drive method):");
        Vehicle c=new Vehicle(a);
        Coastal_vessels b=new Coastal_vessels(a,categories,material);
        c.Drive();
        a.Drive();
        System.out.print("->");
        b.Drive();
        b.stats();
    }

    public static void main(String[] arg){
        Scanner scan=new Scanner(System.in);
        q2 ob=new q2();
        while(true){
            System.out.println("Enter the following choices:1-Two-wheeler,2-Four-wheeler,3-Ocean-vessel,4-Coastal-vessel,5-display total no of cars registered,6-exit");
            int c=scan.nextInt();
            if(c==5){
                RoadVehicles.Display_road();Waterborne_vessels.Display_water();continue;
            }
            if(c==6) break;
            System.out.print("Model name:");
            String model=scan.next();
            System.out.print("Price:");
            int price=scan.nextInt();
            System.out.print("Weight:");
            double weight=scan.nextDouble();
            System.out.print("Enter the type of vehicle(Eg:Car):");
            String type=scan.next();
            switch(c){
                case 1:ob.EnterTwo(ob.EnterRoad(model, price, weight, type));break;
                case 2:ob.EnterFour(ob.EnterRoad(model, price, weight, type));break;
                case 3:ob.EnterOcean(ob.EnterWater(model, price, weight, type));break;
                case 4:ob.EnterCoastal(ob.EnterWater(model, price, weight, type));break;
            }

        }
    }
}

