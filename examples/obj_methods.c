static PyMethodDef Native_methods[] = {
    {"summary", (PyCFunction)Native_summary, METH_NOARGS,
     "Return the name and the other attributes formatted"
    },
    {NULL}  /* Sentinel */
};
