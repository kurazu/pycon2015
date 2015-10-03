static PyObject *
basic_hello(PyObject *self)
{
    const char * msg = "Hello world";
    return PyUnicode_FromString(msg);
}
