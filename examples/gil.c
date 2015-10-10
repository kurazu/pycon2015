static PyObject *
gil_calc_release(PyObject * self, PyObject * args)
{
    long n;
    if (!PyArg_ParseTuple(args, "l", &n)) {
        return NULL;
    }
    long result;

    Py_BEGIN_ALLOW_THREADS
    result = fibonacci(n);
    Py_END_ALLOW_THREADS

    return PyLong_FromLong(result);
}
