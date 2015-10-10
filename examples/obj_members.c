static PyMemberDef Native_members[] = {
    {"name", T_OBJECT_EX, offsetof(Native, name), 0, "Name"},
    {"number", T_LONG, offsetof(Native, number), 0, "Number"},
    {"pointer", T_STRING, offsetof(Native, pointer), READONLY, "Pointer"},
    {NULL}  /* Sentinel */
};
