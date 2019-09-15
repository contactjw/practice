import java.util.Scanner;

public class Problem13 {

	public static void main(String[] args) {
		final double TAX = 0.0675,
					 TIP = 0.20;
		double mealPrice,
			   taxTotal,
			   tipTotal,
			   totalMealPrice;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter the cost of the meal: $");
		mealPrice = keyboard.nextDouble();
		
		taxTotal = TAX * mealPrice;
		tipTotal = (TAX * mealPrice + mealPrice) * TIP;
		totalMealPrice = mealPrice + taxTotal + tipTotal;
		
		System.out.println("Meal Charge: $" + mealPrice);
		System.out.println("Tax Charge:  $" + taxTotal);
		System.out.println("Tip Charge:  $" + tipTotal);
		System.out.println("Total Price: $" + totalMealPrice);

	}

}
