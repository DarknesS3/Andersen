/* Create an algorithm: if the entered number is greater than 7, then print “Hello”
*/

import java.util.Scanner;

 public class Hello {
	 public static void main(String args[]){
		 Scanner inputNumber = new Scanner(System.in);
	        System.out.print("Enter number: ");
	        if (inputNumber.nextInt() > 7 ) 
	            System.out.println("Hello");
	        else 
	            System.out.println("Good Bye");
	 }
}
