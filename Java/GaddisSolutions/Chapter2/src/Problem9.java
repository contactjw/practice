import java.util.Scanner;

public class Problem9 {

	public static void main(String[] args) {
		double milesDriven,
			   gallonsUsed;
		
		Scanner keyboard = new Scanner(System.in);
		
		
		System.out.print("Enter the number of miles driven: ");
		milesDriven = keyboard.nextDouble();
		
		System.out.print("Enter the number of gallons of gas used: ");
		gallonsUsed = keyboard.nextDouble();
		
		System.out.println("Your car gets " + (milesDriven / gallonsUsed) + " miles per gallon.");
		
		keyboard.close();
		
	}

}
