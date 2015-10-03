PyMODINIT_FUNC
PyInit_basic(void)
{
    return PyModule_Create(&basic_module);
}
