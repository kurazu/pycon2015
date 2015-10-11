boost = Extension(
     'boost',
     sources=['src/boost_mod/boost.cpp'],
     include_dirs=[os.path.join(BOOST_DIR, 'include')],
     libraries=["boost_python"],
     library_dirs=[os.path.join(BOOST_DIR, 'lib')],
)
