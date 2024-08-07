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
};

#endif