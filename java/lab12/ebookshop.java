package lab12;
import java.util.Scanner;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
public class ebookshop {
	private Connection connect = null;
    private Statement statement = null;
    private PreparedStatement preparedStatement = null;
    private ResultSet resultSet = null;
    ebookshop() throws SQLException{
    	try {
			Class.forName("org.postgresql.Driver");
			connect = DriverManager.getConnection("jdbc:postgresql://localhost:5432/ebookshop","postgres", "varun");
			statement = connect.createStatement();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
    	finally {
    		System.out.println("Connection Successfull");
    	}
    }
    public void display() throws SQLException {
    	System.out.println("Contents: ");
    	System.out.println("ID | Title | Author | Price | Quantity");
    	while (resultSet.next()) {
            int id = resultSet.getInt("id");
            String title = resultSet.getString("title");
            String author = resultSet.getString("author");
            float price=resultSet.getFloat("price");
            int qty = resultSet.getInt("qty");
            System.out.print(id+" | ");
            System.out.print(title+" | ");
            System.out.print(author+" | ");
            System.out.print(price+" | ");
            System.out.println(qty);
        }
    }
    public void update(int id,float newPrice) throws SQLException {
    	preparedStatement = connect.prepareStatement("update books set price=? where id=?;");
        preparedStatement.setFloat(1,newPrice);
        preparedStatement.setInt(2,id);
        preparedStatement.executeUpdate();
        System.out.println("Successfully updated");
    }
    public void search(float minPrice,float maxPrice) throws SQLException {
    	preparedStatement = connect.prepareStatement("select * from books where price>=? and price<=?;");
        preparedStatement.setFloat(1,minPrice);
        preparedStatement.setFloat(2,maxPrice);
        resultSet=preparedStatement.executeQuery();
        System.out.println("Results: ");
        display();
    }
    public void delete(int id) throws SQLException {
    	preparedStatement = connect.prepareStatement("delete from books where id=?;");
        preparedStatement.setInt(1,id);
        preparedStatement.executeUpdate();
        System.out.println("Successfully deleted");
    }
    public void insert(int id,String title,String author,float price,int qty) throws SQLException {
    	preparedStatement = connect.prepareStatement("insert into books values (?,?,?,?,?); ");
    	preparedStatement.setInt(1,id);
    	preparedStatement.setString(2,title);
    	preparedStatement.setString(3,author);
    	preparedStatement.setFloat(4,price);
    	preparedStatement.setInt(5,qty);
        preparedStatement.executeUpdate();
        System.out.println("Successfully inserted");
    }
	public void exit() {
        try {
            if (resultSet != null) resultSet.close();
            if (statement != null) statement.close();
            if (connect != null) connect.close();
        } 
        catch (Exception e) {}
        finally {
        	System.out.println("Connection closed");
        }
    }
	public static void main(String[] args) throws SQLException {
		Scanner sc= new Scanner(System.in);
		ebookshop es=new ebookshop();
		int ch;
		while(true) {
			System.out.println("Enter Your Choice:");
			System.out.println(" 1.Display\n 2.Update\n 3.Search\n 4.Delete\n 5.Insert\n 6.Exit");
			ch=sc.nextInt();
			switch(ch) {
			case 1:
				es.resultSet = es.statement.executeQuery("select * from books");
				es.display();
				break;
			case 2:
				System.out.print("Enter id:");
				int id=sc.nextInt();
				System.out.print("Enter New Price:");
				float newPrice=sc.nextFloat();
				es.update(id, newPrice);
				break;
			case 3:
				System.out.print("Enter Min Price:");
				float minPrice=sc.nextFloat();
				System.out.print("Enter Max Price:");
				float maxPrice=sc.nextFloat();
				es.search(minPrice, maxPrice);
				break;
			case 4:
				System.out.print("Enter id:");
				int id1=sc.nextInt();
				es.delete(id1);
				break;
			case 5:
				System.out.print("Enter Id:");
				int id2=sc.nextInt();
				sc.nextLine();
				System.out.print("Enter Title:");
				String title=sc.nextLine();
				System.out.print("Enter Author:");
				String author=sc.nextLine();
				System.out.print("Enter Price:");
				float price=sc.nextFloat();
				System.out.print("Enter Quantity:");
				int qty=sc.nextInt();
				es.insert(id2, title, author, price, qty);
				break;
			case 6:
				es.exit();
				System.exit(0);
				break;
			default:
				System.out.println("Invalid Choice!");
			}
		}
	}
	
}

