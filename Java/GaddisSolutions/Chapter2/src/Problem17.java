import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Scanner;

public class Problem17 {

	public static void main(String[] args) {
		final int COOKIES_MADE = 40;
		final double SUGAR = 1.5,
					 BUTTER = 1.0,
					 FLOUR = 2.75;
		int cookiesWanted;
		double sugarForOne,
			   butterForOne,
			   flourForOne;
		
		NumberFormat formatter = new DecimalFormat("#0.00");
		
		Scanner keyboard = new Scanner(System.in);
		
		sugarForOne = SUGAR / COOKIES_MADE;
		butterForOne = BUTTER / COOKIES_MADE;
		flourForOne = FLOUR / COOKIES_MADE;
		
		System.out.print("How many cookies do you want to make: ");
		cookiesWanted = keyboard.nextInt();
		
		System.out.println("\nHere is the recipe needed to make " + cookiesWanted + " cookies.");
		System.out.println("Sugar: " + formatter.format(sugarForOne * cookiesWanted) + " cups.");
		System.out.println("Butter: " + formatter.format(butterForOne * cookiesWanted) + " cups.");
		System.out.println("Flour: " + formatter.format(flourForOne * cookiesWanted) + " cups.");
	}

}
