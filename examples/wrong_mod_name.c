static struct PyModuleDef basic_module = {
   PyModuleDef_HEAD_INIT,
   "different",   /* name of module */
   "The simplest module", /* module documentation, may be NULL */
   -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   basic_methods
};
