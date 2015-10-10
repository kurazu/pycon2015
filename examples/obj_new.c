static PyObject *
Native_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
    Native *self;

    self = (Native *)type->tp_alloc(type, 0);
    if (self == NULL) {
        return NULL;
    }
    self->number = 0;
    self->name = PyUnicode_FromString("");
    if (self->name == NULL) {
        Py_DECREF(self);
        return NULL;
    }
    self->number = 0;
    self->pointer = (char *)malloc(sizeof(char) * 4);
    if (self->pointer == NULL) {
        Py_DECREF(self->name);
        Py_DECREF(self);
        return PyErr_NoMemory();
    }
    strcpy(self->pointer, "?");
    return (PyObject *)self;
}
