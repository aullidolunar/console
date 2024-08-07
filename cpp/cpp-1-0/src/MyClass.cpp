#include "MyClass.h"

MyClass::MyClass() {
	m_num = 0;
}

MyClass::MyClass(int num) {
	m_num = num;
}

int MyClass::get_num() {
	return m_num;
}