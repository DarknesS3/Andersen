/*
Create an algorithm: there is a numerical array at the input, it is necessary to output the elements of the array multiples of 3
*/

#include <iostream>
#include <conio.h>


int main() {
	const int a=10;
	int array[a];
	int i=0;
	system("color b");
	while (i<a)
	{
		std::cout << "Enter the number of array["<<i<<"]\n\t array["<<i<<"]=";
		std::cin >> array[i];
		system("cls");
		i++;
	}
	system("color a");
	std::cout << "\tArray elements:\n\n";
	 for(int j=0; j<a; j++)
	 	std::cout <<j<<".=" << array[j] <<", ";
	std::cout << std::endl;
	std::cout << "\n\n\n\tArray elements multiple of 3:\n\n";
	for(int j=0; j<a; j++)
		if(!(array[j]%3))
			std::cout <<j<<".=" << array[j] <<", ";
	getch();
	return 0;
}
