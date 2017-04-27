#ifndef VARIANT_VALUE
# define VARIANT_VALUE

struct    Variant_Value
{
    int i;
    double f;
    std::string str;

    Variant_Value(int i) {current_type = typeid(int).name(); this->i = i;};
    Variant_Value(double f) {current_type = typeid(double).name(); this->f = f;};
    Variant_Value(std::string str) {current_type = typeid(std::string).name(); this->str = str;};
    std::string type() const { return (current_type); };
private:
    std::string current_type;
};

#endif // !VARIANT_VALUE
