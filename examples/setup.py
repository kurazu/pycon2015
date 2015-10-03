from setuptools import setup, Extension

basic = Extension('basic', sources=['src/basic_mod/basic.c'])

setup(
    name='pyext',
    ext_modules=[basic],
)
