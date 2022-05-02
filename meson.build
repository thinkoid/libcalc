project('calc', 'cpp', version : '0.0.1', license : 'GPL',
        default_options : [ 'cpp_std=c++20' ])

includes = include_directories('include')

boost_deps = dependency('boost', modules : [ 'unit_test_framework' ])

subdir('include')
subdir('examples')
