import java.util.Scanner;

public class Problem12 {

	public static void main(String[] args) {
		String city;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter your favorite city: ");
		city = keyboard.nextLine();
		
		System.out.println("Number of characters in city: " + city.length());
		System.out.println("City name in uppercase: " + city.toUpperCase());
		System.out.println("City name in lowercase: " + city.toLowerCase());
		System.out.println("First letter of city name: " + city.charAt(0));
	}
}
