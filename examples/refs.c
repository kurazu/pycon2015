static PyObject *
key_belongs(PyObject *self, PyObject * args, PyObject * kwargs)
{
    static char * keywords[] = {"mapping", "item", "category", NULL};
    PyObject * mapping, *item, *category, *category_sequence, *result;
    /* All objects parsed are borrowed references, no DECREF needed. */
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OOO", keywords,
                                     &mapping, &item, &category)) {
        return NULL;
    }
    /* GetItem returns a new reference that needs to be decremented */
    category_sequence = PyObject_GetItem(mapping, category);
    if (category_sequence == NULL) {
        return NULL;
    }
    int contains = PySequence_Contains(category_sequence, item);
    Py_DECREF(category_sequence);
    if (contains == -1) {
        return NULL;
    }
    result = contains ? Py_True : Py_False;
    Py_INCREF(result);
    return result;
}
