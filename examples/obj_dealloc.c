static void
Native_dealloc(Native * self)
{
    Py_XDECREF(self->name);
    if (self->pointer != NULL) {
        free(self->pointer);
    }
    Py_TYPE(self)->tp_free((PyObject *)self);
}
