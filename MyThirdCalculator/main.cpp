#include <iostream>

//Calculator forhåpentlig

int firstNum{};
int secondNum{};
char mop{}; //Math operator



int main() {

	//Add your first number
	std::cout << "Please enter a number";
	std::cin >> firstNum;

	//Add your second number
	std::cout << "Please enter your second number";
	std::cin >> secondNum;
	
	//Choose operator
	std::cout << "What do you want to do";
	std::cin >> mop;
		


		
	//Declare what operator that can be put in
	switch (mop) {
	case '/':
		std::cout << firstNum / secondNum;
		break;
	
	case '*':
		std::cout << firstNum * secondNum;
		break;

	case '+':
		std::cout << firstNum + secondNum;
		break;

	case '-':
		std::cout << firstNum - secondNum;
	}


	




	








	return 0;
}