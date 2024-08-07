#include "MyClass.h"

int main() { 
	MyClass num1;
	MyClass num2(10);
	std::cout << "\nHola mundo\n";
	std::cout << "num1: " << num1.get_num() << "\n";
	std::cout << "num2: " << num2.get_num() << "\n";
	return 0;
}