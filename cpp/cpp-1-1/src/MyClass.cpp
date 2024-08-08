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

void MyClass::set_num(int n) {
	m_num = n;
}

std::ostream& operator<< (std::ostream& os, MyClass& mc) {
	return os << mc.m_num;
}

MyClass& MyClass::operator<< (int num) {
	m_num = num;
	return *this;
}

MyClass& MyClass::operator= (int num) {
	m_num = num;
	return *this;
}

MyClass& MyClass::operator= (MyClass& mc) {
	m_num = mc.get_num();
	return *this;
}

MyClass& MyClass::operator++ (int) {
	m_num++;
	return *this;
}

MyClass& MyClass::operator++ () {
	++m_num;
	return *this;
}