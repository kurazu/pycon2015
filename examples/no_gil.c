static PyObject *
gil_calc(PyObject * self, PyObject * args)
{
    long n;
    if (!PyArg_ParseTuple(args, "l", &n)) {
        return NULL;
    }

    long result;
    result = fibonacci(n);

    return PyLong_FromLong(result);
}
