bool has_letter(const char * text, const char letter) {
    const char * ptr = text;
    while (char c = *(ptr++)) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}
