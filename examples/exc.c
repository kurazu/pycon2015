if (condition) {
    PyErr_SetString(PyExc_RuntimeError, "Cannot format output");
    return NULL;
}
