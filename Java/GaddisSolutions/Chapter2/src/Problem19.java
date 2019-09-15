import java.text.DecimalFormat;
import java.text.NumberFormat;

public class Problem19 {

	public static void main(String[] args) {
		final double SHARES_PURCHASED = 1000,
				     SHARE_PRICE_BOUGHT = 32.87,
				     COMMISSION_RATE = 0.02,
				     SHARES_SOLD = 1000,
				     SHARE_PRICE_SOLD = 33.92;
		double flatCost,
			   commissionBought,
			   soldFor,
			   commissionSold,
			   profitMade;
		
		NumberFormat formatter = new DecimalFormat("#0.00");
		
		flatCost = SHARES_PURCHASED * SHARE_PRICE_BOUGHT;
		commissionBought = flatCost * COMMISSION_RATE;
		soldFor = SHARES_SOLD * SHARE_PRICE_SOLD;
		commissionSold = soldFor * COMMISSION_RATE;
		profitMade = (soldFor + commissionSold) - (flatCost + commissionBought);
		
		System.out.println("Stock purchase cost:       $" + formatter.format(flatCost));
		System.out.println("Commission paid to broker: $" + formatter.format(commissionBought));
		System.out.println("Stock sold at:             $" + formatter.format(soldFor));
		System.out.println("Commission paid to broker: $" + formatter.format(commissionSold));
		System.out.println("Profit made from trade:    $" + formatter.format(profitMade));
	}

}
