#ifndef _MYCLASS_INC_
#define _MYCLASS_INC_

#include <iostream>

class MyClass {
	private:
		int m_num;
	public:
		MyClass();
		MyClass(int);
		int get_num();
		void set_num(int);
	friend std::ostream& operator<< (std::ostream&, MyClass&);
	MyClass& operator<< (int);
	MyClass& operator= (MyClass&);
	MyClass& operator= (int);
	MyClass& operator++ (int);
	MyClass& operator++ ();
};

#endif