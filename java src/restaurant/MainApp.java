import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class MainApp {
	static Scanner scan = new Scanner(System.in);
	List<Hotel> hotels = new ArrayList<>();
	List<Customer> customers = new ArrayList<>();

	public void setup() {
		Food item1 = new Dhosa("Ghee");
		Food item2 = new Dhosa("Masal");
		Food item3 = new Chappati("Palak");
		Food item4 = new Chappati("Panner");

		Hotel hotel1 = new Hotel("A", 4);
		hotel1.addItemToMenu(item1);
		hotel1.addItemToMenu(item2);
		hotel1.addItemToMenu(item3);

		Hotel hotel2 = new Hotel("B", 3);
		hotel2.addItemToMenu(item1);
		hotel2.addItemToMenu(item3);

		Hotel hotel3 = new Hotel("C", 4);
		hotel3.addItemToMenu(item1);
		hotel3.addItemToMenu(item2);
		hotel3.addItemToMenu(item4);

		hotels.add(hotel1);
		hotels.add(hotel2);
		hotels.add(hotel3);

	}

	void login() {

	}

	void signup() {

	}

	public void run() {
		int choice;
		println("Welcome!!!");
		println("1.Login\n2.Signup\n3.Exit");
		choice = scan.nextInt();
		if(choice == 1) login();
		else if(choice == 2) signup();
		else return;
	}

	// short for println
	public static void println(Object obj) {
		System.out.println(obj);
	}

	// short for print
	public static void print(Object obj) {
		System.out.print(obj);
	}

	public static void main(String...args) {
		MainApp app = new MainApp();
		app.setup();
		app.run();
	}
}