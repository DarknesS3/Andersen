import java.util.Scanner;

public class Array_multyples_for_3 {
	public static void main(String arg[]) {
		Scanner enterArrayElement = new Scanner(System.in);
		int arraySize = 10;
		int numArray[] = new int[arraySize];
		System.out.println("Insert array elements:\n");
		for(int i=0; i < arraySize; i++)
			numArray[i]=enterArrayElement.nextInt();
		System.out.println("\tArray elements:\n\n");
		for(int i=0; i < arraySize; i++)
			System.out.println(" "+numArray[i]+",");
		System.out.println("\n\n\n\tArray elements multiple of 3:\n\n");
		for(int i=0; i < arraySize; i++)
			if(numArray[i] != 0 && (numArray[i]%3) == 0)
				System.out.println(" "+numArray[i]+",");
	}
}
