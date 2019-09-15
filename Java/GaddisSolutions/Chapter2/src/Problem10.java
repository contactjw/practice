import java.util.Scanner;

public class Problem10 {

	public static void main(String[] args) {
		double score1,
			   score2,
			   score3;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter test score #1: ");
		score1 = keyboard.nextDouble();
		
		System.out.print("Enter test score #2: ");
		score2 = keyboard.nextDouble();
		
		System.out.print("Enter test score #3: ");
		score3 = keyboard.nextDouble();
		
		System.out.println("\nYour test scores were as follows:\nScore 1: " + score1 + "\nScore 2: " +
						    score2 + "\nScore 3: " + score3);
		System.out.println("Your average score was " + ((score1 + score2 + score3) / 3));		
		
		keyboard.close();
	}

}
