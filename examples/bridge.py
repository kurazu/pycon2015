from bridge import js_func

@js_func
def math(str):
    """
    var sqrt = Math.sqrt;
    return (function(arg) {
        return sqrt(arg);
    })(str);
    """

assert math(9) == 3
