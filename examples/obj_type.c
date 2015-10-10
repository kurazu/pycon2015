static PyTypeObject NativeType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "obj.Native",              /* tp_name */
    sizeof(Native),            /* tp_basicsize */
    0,                         /* tp_itemsize */
    (destructor)Native_dealloc,/* tp_dealloc */
    0,                         /* tp_print */
    0,                         /* tp_getattr */
    0,                         /* tp_setattr */
    // ...
    Py_TPFLAGS_DEFAULT |
        Py_TPFLAGS_BASETYPE,   /* tp_flags */
    "Native objects",          /* tp_doc */
    // ...
    0,                         /* tp_iter */
    0,                         /* tp_iternext */
    Native_methods,            /* tp_methods */
    Native_members,            /* tp_members */
    // ...
    (initproc)Native_init,     /* tp_init */
    0,                         /* tp_alloc */
    Native_new,                /* tp_new */
};
