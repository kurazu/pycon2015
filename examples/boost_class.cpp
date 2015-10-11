struct Native
{
    std::string name;
    long number;
    std::string pointer;

    Native(std::string name, long number, bool yes): name(name), number(number) {
        this->pointer = std::string(yes ? "YES" : "NO");
    }

    std::string summary() {
        std::stringstream ss;
        ss << "Native " << this->name << " number " << this->number << " pointer " << this->pointer;
        return ss.str();
    }
};
