BOOST_PYTHON_MODULE(boost)
{
    class_<Native>("Native", init<std::string, long, bool>())
        .def_readwrite("name", &Native::name)
        .def_readwrite("number", &Native::number)
        .def_readonly("pointer", &Native::pointer)
        .def("summary", &Native::summary)
    ;
}
