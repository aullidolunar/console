import sys

cpp_file = sys.argv[1]

with open(cpp_file, "w") as f:
	f.write('#include "file.h"\n\n')
	f.write('int fncalculate1(int num){\n')
	f.write('\treturn num;\n')
	f.write('}\n\n')
	f.write('int fncalculate2(MyClass* pMC) {\n')
	f.write('\treturn pMC->get_num();\n')
	f.write('}')

cpp_h = cpp_file.split('.')[0] + '.h'

with open(cpp_h, 'w') as f:
	f.write('#ifndef _FILE_CPP_H\n')
	f.write('#define _FILE_CPP_H\n\n')
	f.write('#include "MyClass.h"\n\n')
	f.write('int fncalculate1(int);\n')
	f.write('int fncalculate2(MyClass*);\n\n')
	f.write('#endif')