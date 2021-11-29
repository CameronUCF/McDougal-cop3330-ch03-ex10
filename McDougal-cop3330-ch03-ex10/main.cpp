#include "main.h"

int main()
{
	double input1;
	double input2;
	std::string operation;

	std::cout << "Enter a mathematical operator (may also use plus, minus, mul, div), then two numbers:" << std::endl;
	while (std::cin >> operation >> input1 >> input2)
		TestInput(operation, input1, input2);
	
	return 0;
}

void TestInput(std::string operation, double input1, double input2)
{
	double result = 0;

	if (operation == "plus" || operation == "+")
		result = input1 + input2;
	else if (operation == "minus" || operation == "-")
		result = input1 - input2;
	else if (operation == "mul" || operation == "*")
		result = input1 * input2;
	else if (operation == "div" || operation == "/")
		result = input1 / input2;
	else
		std::cout << "Bad operator input" << std::endl;

	std::cout << input1 << " " << operation << " " << input2 << " = " << result << std::endl;
	std::cout << "Enter a mathematical operator, then two numbers:" << std::endl;
}