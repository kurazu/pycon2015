(venv)$ python3 setup.py build
running build
running build_py
creating build
creating build/lib.linux-x86_64-3.4
creating build/lib.linux-x86_64-3.4/basic_mod
copying src/basic_mod/__init__.py -> build/lib.linux-x86_64-3.4/basic_mod
copying src/basic_mod/tests.py -> build/lib.linux-x86_64-3.4/basic_mod
running build_ext
building 'basic' extension
creating build/temp.linux-x86_64-3.4
creating build/temp.linux-x86_64-3.4/src
creating build/temp.linux-x86_64-3.4/src/basic_mod
x86_64-linux-gnu-gcc -pthread -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes -g -fstack-protector-strong -Wformat -Werror=format-security -D_FORTIFY_SOURCE=2 -fPIC -I/usr/include/python3.4m -I/home/kurazu/workspace/pyext/venv/include/python3.4m -c src/basic_mod/basic.c -o build/temp.linux-x86_64-3.4/src/basic_mod/basic.o
x86_64-linux-gnu-gcc -pthread -shared -Wl,-O1 -Wl,-Bsymbolic-functions -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,-Bsymbolic-functions -Wl,-z,relro -g -fstack-protector-strong -Wformat -Werror=format-security -D_FORTIFY_SOURCE=2 build/temp.linux-x86_64-3.4/src/basic_mod/basic.o -o build/lib.linux-x86_64-3.4/basic.cpython-34m.so
