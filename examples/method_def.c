static PyMethodDef basic_methods[] = {
    {"hello", (PyCFunction)basic_hello, METH_NOARGS, "Return hello world."},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};
