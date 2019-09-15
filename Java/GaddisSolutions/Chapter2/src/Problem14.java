import java.util.Scanner;

public class Problem14 {

	public static void main(String[] args) {
		int females,
			males,
			total;
		double percentFemale,
			   percentMale;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter the number of females registered: ");
		females = keyboard.nextInt();
		
		System.out.print("Enter the number of males registered: ");
		males = keyboard.nextInt();
		
		total = females + males;
		
		percentFemale = (double)females / total * 100;
		percentMale = (double)males / total * 100;
		
		System.out.println("The class is " + String.format("%.2f", percentFemale) +
						  "% female and " + String.format("%.2f", percentMale) + "% male.");
		
	}

}
