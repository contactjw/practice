
public class Problem15 {

	public static void main(String[] args) {
		final double TOTAL_SHARES = 600,
					 PRICE_PER_SHARE = 21.77,
					 COMMISSION_RATE = 0.02;
		double totalCommission,
			   priceBefore,
			   totalPaid;
		
		priceBefore = TOTAL_SHARES * PRICE_PER_SHARE;
		totalCommission = (TOTAL_SHARES * PRICE_PER_SHARE * COMMISSION_RATE);
		
		System.out.println("Price of stock alone:        $" + priceBefore);
		System.out.println("Price of commission:         $" + totalCommission);
		System.out.println("Total price paid for stocks: $" + (priceBefore + totalCommission)); 
	}

}
