static PyObject *
param_hello(PyObject *self, PyObject * args)
{
    const char * name;
    unsigned age;
    if (!PyArg_ParseTuple(args, "sI", &name, &age)) {
        return NULL;
    }
    // ...
}
