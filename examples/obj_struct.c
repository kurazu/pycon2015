/* Structure of Native Python objects */
typedef struct {
    // Required header fields
    PyObject_HEAD
    char * pointer;
    long number;
    PyObject * name;
} Native;
