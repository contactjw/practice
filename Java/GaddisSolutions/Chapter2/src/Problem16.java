
public class Problem16 {

	public static void main(String[] args) {
		final int TOTAL_SURVEYED = 12467;
		final double PURCHASED_DRINK = 0.14,
					 PURCHASED_CITRUS = 0.64;
		
		System.out.println("Total Customers Who Bought Energy Drink: " +
						   (TOTAL_SURVEYED * PURCHASED_DRINK));
		System.out.println("Total Customers Who Favored Citrus: " +
						   (TOTAL_SURVEYED * PURCHASED_DRINK * PURCHASED_CITRUS));
	}

}
