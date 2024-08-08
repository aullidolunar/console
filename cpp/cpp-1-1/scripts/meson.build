# scripts

python_path = find_program('python3')

file_cpp = custom_target('file_cpp',
	output : 'file.cpp',
	input : 'gen_cpp.py',
	command : [python_path, '@INPUT@', '@OUTPUT@'],
)

PROGRAM_SOURCES += file_cpp