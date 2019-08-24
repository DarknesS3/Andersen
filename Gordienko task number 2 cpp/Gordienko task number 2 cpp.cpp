/*
Create an algorithm: if the entered name is equal to Vyacheslav, then print “Hello, Vyacheslav”, if not, then print “No such name”
*/

#include <iostream>
#include "string.h"
#include <conio.h>
#include <string>


int main() 
{
	setlocale(LC_ALL, "Russian");
	const int a=20;
	char enterName[a];
	const char* checkName = "Vyacheslav";
	std::cout << "Enter a name, for example, Vyacheslav:\n";
	std::cin >> enterName;
    if (strnicmp(enterName, checkName, sizeof(checkName)) == 0)
    		{
    			system("cls");
    			system("color a");
    		std::cout << "Hello, Vyacheslav";
    		}
	else 	
			{
				system("cls");
    			system("color b");
				std::cout << "No such name";
			}
	getch();
	return 0;
}
