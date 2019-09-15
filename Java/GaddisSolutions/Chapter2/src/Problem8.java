import java.util.Scanner;

public class Problem8 {

	public static void main(String[] args) {
		int numCookies = 40,
			servings = 10,
			caloriesPerServing = 300,
			cookiesEaten;
		double caloriesPerCookie;
		
		caloriesPerCookie = (double)caloriesPerServing / (numCookies / servings);
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter number of cookies eaten: ");
		cookiesEaten = keyboard.nextInt();

		System.out.println("You ate a total of " + (cookiesEaten * caloriesPerCookie) + " calories.");
		
		keyboard.close();
	}
}
