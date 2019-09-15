import java.util.Scanner;

public class Problem18 {

	public static void main(String[] args) {
		String name,
			   city,
			   college,
			   profession,
			   animal,
			   petName;
		int age;
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter your name: ");
		name = keyboard.nextLine();
		
		System.out.print("Enter your age: ");
		age = keyboard.nextInt();
		
		keyboard.nextLine();

		System.out.print("Enter your city: ");
		city = keyboard.nextLine();

		System.out.print("Enter your college: ");
		college = keyboard.nextLine();

		System.out.print("Enter your profession: ");
		profession = keyboard.nextLine();

		System.out.print("Enter your animal type: ");
		animal = keyboard.nextLine();
		
		System.out.print("Enter your pet's name: ");
		petName = keyboard.nextLine();
		
		System.out.println("There once was a person named " + name + " who lived in " + city +
						   ". At the age of " + age + ",\n" + name + " went to college at " + 
						   college + ". " + name + " graduated and went to work as a\n" + profession +
						   ". Then, " + name + " adopted a(n) " + animal + " named " + petName +
						   ". They both lived happily ever after!");
	}

}
