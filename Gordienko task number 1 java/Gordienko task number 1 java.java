import java.util.Scanner;

 public class Hello {
	 public static void main(String args[]){
		 Scanner inputNumber = new Scanner(System.in);
	        System.out.print("������� �����: ");
	        if (inputNumber.nextInt() > 7 ) 
	            System.out.println("������");
	        else 
	            System.out.println("�� ��������");
	 }
}
