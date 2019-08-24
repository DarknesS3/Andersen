/* Create an algorithm: if the entered number is greater than 7, then print “Hello”
*/

#include <iostream>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int inputNumber, verifyNumber =7;
std::cout << "Please, enter the number:" << std::endl;
std::cin >> inputNumber;
	if (inputNumber > verifyNumber)std::cout << "Hello" << std::endl;
	getch();
	return 0;
}
