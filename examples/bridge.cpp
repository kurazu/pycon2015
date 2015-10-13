JS::RootedFunction compiled_function(module_state->context);
int return_value = 0;
try {
    compile_js_func(
        module_state, function_name, file_name, line_no,
        nargs, c_arg_names, code, &compiled_function
    );
    self->js_func = compiled_function;
} catch (const char * err_msg) {
    return_value = -1;
    PyErr_SetString(PyExc_RuntimeError, err_msg);
} catch (JSError * error) {
    return_value = -1;
    PyErr_Format(
         PyExc_RuntimeError, "%s at %s:%u",
         error->message, error->file_name, error->line_no
    );
    error->reset();
}
