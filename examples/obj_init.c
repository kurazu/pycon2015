static int
Native_init(Native *self, PyObject *args, PyObject *kwargs)
{
    PyObject * name = NULL;
    PyObject * tmp;
    int yes_no;

    static char *kwlist[] = {"name", "number", "yes", NULL};
    if (!PyArg_ParseTupleAndKeywords(
        args, kwargs, "Olp", kwlist, &name, &self->number, &yes_no
    )) {
        return -1;
    }

    if (name) {
        tmp = self->name;
        Py_INCREF(name);
        self->name = name;
        Py_XDECREF(tmp);
    }
    strcpy(self->pointer, yes_no ? "YES" : "NO");
    return 0;
}
