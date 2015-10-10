static PyObject *
key_belongs(PyObject *self, PyObject * args, PyObject * kwargs)
{
    // ...
    int contains = PySequence_Contains(category_sequence, item);
    // ...
    PyObject * result;
    result = contains ? Py_True : Py_False;
    Py_INCREF(result);
    return result;
}
