#include <iostream>

int main() 
{
	//an array of all the characters of the alphabet
	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	//declaring the input variable
	int input;
	//Displays message
	std::cout << "How many letters do you want to display of the alphabet?";
	//sets variable as input
	std::cin >> input;

	//if a number is greater than 26, I set it to 26
	if (input > 26) {
		input = 26;
	}

	//if the input is greater than 0, it enters the if statement
	if (input >= 1) {
		for (int i = 0; i < input; i++) //loops through the amount of letters until it reaches the input
		{
			std::cout << alphabet[i]; //prints letter
		}
	}
	else //if it is not a number
	{
		std::cout << "Invalid input, please insert a number";
	}
	std::cout << "\n"; //new line
}
