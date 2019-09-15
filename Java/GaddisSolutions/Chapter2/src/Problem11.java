import java.util.Scanner;

public class Problem11 {

	public static void main(String[] args) {
		final double PROFIT_PERC = 0.4;
		double circuitCost,
			   totalProfit;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter cost of circuit board: $");
		circuitCost = keyboard.nextDouble();
		
		totalProfit = circuitCost * PROFIT_PERC;
		
		System.out.println("The company sold the circuit board at $" + totalProfit + " profit.");
		
		keyboard.close();
	}

}
