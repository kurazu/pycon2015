#include <sstream>
#include <string>

static PyObject *
cpp_format(PyObject *self, PyObject * args)
{
    const char * name;
    unsigned age;
    if (!PyArg_ParseTuple(args, "sI", &name, &age)) {
        return NULL;
    }
    std::stringstream ss;
    ss << name << " is " << age << " years old.";
    std::string formatted = ss.str();
    const char * formatted_cstring = formatted.c_str();
    return PyUnicode_FromString(formatted_cstring);
}
