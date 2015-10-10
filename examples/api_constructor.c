static PyObject *
obj_create(PyObject *self)
{
    // Error checking skippped for brevity.
    PyObject * args = PyTuple_New(3);
    PyTuple_SetItem(args, 0, name);
    PyTuple_SetItem(args, 1, number);
    PyTuple_SetItem(args, 2, yes);
    PyObject * kwargs = NULL;
    PyObject * result = PyObject_Call((PyObject *) &NativeType, args, kwargs);
    Py_DECREF(args);
    if (result == NULL) {
        return NULL;
    }
    return result;
}
