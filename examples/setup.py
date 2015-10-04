from setuptools import setup, Extension

basic = Extension('basic', sources=['basic.c'])

setup(
    name='pyext',
    ext_modules=[basic],
)
