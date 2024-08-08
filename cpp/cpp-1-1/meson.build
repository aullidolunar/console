# .

# meson setup build
# ninja -C build
# ninja -C build run | meson compile -C build
# meson setup --reconfigure build

project('cpp', 'cpp', version : '1.1.0.0', default_options : ['warning_level=3', 'cpp_std=c++14'])

# for stem
fs = import('fs')

version_str =  meson.project_version().split('.')

bin_name = meson.project_name() + '-' +  version_str[0] + '-' +  version_str[1]

PROGRAM_SOURCES = []
INCLUDE_DIRS = []
subdir('src')
subdir('scripts')

bin_path = executable(bin_name, PROGRAM_SOURCES, include_directories : INCLUDE_DIRS)

run_target('run', command : bin_path)

zip_path = find_program('7z')

build_dir = fs.stem(meson.project_build_root())
run_target('zip', command : [zip_path, 'a', '-t7z', '-xr!' + build_dir, bin_name + '.7z', '../../' + bin_name])
