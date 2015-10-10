static PyObject *
Native_summary(Native* self)
{
    if (self->name == NULL) {
        PyErr_SetString(NativeError, "name");
        return NULL;
    }

    return PyUnicode_FromFormat(
        "Native %S number %li pointer %s",
        self->name, self->number, self->pointer
    );
}
