static PyObject *
key_belongs(PyObject *self, PyObject * args, PyObject * kwargs)
{
    static char * keywords[] = {
        "mapping", "item", "category", NULL
    };
    PyObject * mapping;
    PyObject * item;
    PyObject * category;

    if (!PyArg_ParseTupleAndKeywords(
        args, kwargs, "OOO", keywords,
        &mapping, &item, &category
    )) {
        return NULL;
    }
    // ...
}
