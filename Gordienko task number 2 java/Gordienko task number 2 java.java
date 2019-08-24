/*
Create an algorithm: if the entered name is equal to Vyacheslav,
 then print “Hello, Vyacheslav”, if not, then print “No such name”
*/

import java.util.Scanner;

public class equals {
	public static void main(String args[]) {
		Scanner inputName = new Scanner(System.in);
		String  verifyName="Vyacheslav";
		System.out.print("Enter a name, for example, Vyacheslav:"); 
		
		if((inputName.nextLine()).equals(verifyName))
			System.out.print("Hello, Vyacheslav");
		else System.out.print("No such name");
	}
}
