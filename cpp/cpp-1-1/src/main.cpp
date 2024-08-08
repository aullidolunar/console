#include "file.h"

int main() { 
	MyClass num1;
	MyClass num2(10);
	std::cout << "\nHola mundo\n";
	std::cout << "num1: " << num1.get_num() << "\n";
	std::cout << "num2: " << num2.get_num() << "\n";
	
	auto old_num1 = num1.get_num();
	
	auto value = fncalculate1(num1.get_num());
	std::cout << "value from num1: " << value << "\n";
	
	auto number = fncalculate2(&num2);
	std::cout << "number from num2: " << number << "\n";
	
	num1.set_num(69);
	std::cout << "new num1: " << num1 << "\n";
	
	num2 << 13;
	std::cout << "new num2: " << num2 << "\n";
		
	num1 = num2;
	std::cout << "num1 = num2: " << num1 << "\n";
	
	num2 = old_num1;
	std::cout << "num2 with old num1: " << num2 << "\n";
	
	num2++;
	std::cout << "num2 plus plus: " << num2 << "\n";
	
	++num1;
	std::cout << "plus plus num1: " << num1 << "\n";
	return 0;
}