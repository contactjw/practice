import java.util.Scanner;

public class Problem7 {

	public static void main(String[] args) {
		
		final double STATE_TAX = 0.04, 
					 COUNTY_TAX = 0.02;
		double purchase,
			   stateTaxAmount,
			   countyTaxAmount,
			   totalTax;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter the cost of your purchase: $");
		purchase = keyboard.nextDouble();
		
		stateTaxAmount = purchase * STATE_TAX;
		countyTaxAmount = purchase * COUNTY_TAX;
		totalTax = countyTaxAmount + stateTaxAmount;
		
		System.out.println("Purchase Amount:  $" + purchase);
		System.out.println("State Sales Tax:  $" + stateTaxAmount);
		System.out.println("County Sales Tax: $" + countyTaxAmount);
		System.out.println("Total Sales Tax:  $" + totalTax);
		System.out.println("Total Sales Cost: $" + (purchase + totalTax));
		
		keyboard.close();
	}

}
