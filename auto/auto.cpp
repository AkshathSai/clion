#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main() {

    auto int_var = 20;
    auto long_var = 24567L;

    auto float_var {12344.45F};
    auto double_var {23098.65};

    auto string_var = "Hello World!";

    cout << "Type of integer variable: " << typeid(int_var).name() << endl;
    cout << "Type of long variable: " << typeid(long_var).name() << endl;
    cout << "Type of float variable: " << typeid(float_var).name() << endl;
    cout << "Type of double variable: " << typeid(double_var).name() << endl;
    cout << "Type of string variable: " << typeid(string_var).name() << endl;

     
    auto char_variable = 'a';
    auto long_variable = 2'000'000'000'000'000'000; //'(apostrophe) Introduced in C++14 and there are no rules regarding thier positioning

    cout << "Type of char variable: " << typeid(char_variable).name() << endl;
    cout << "Type of long variable: " << typeid(long_variable).name() << endl;

    
    auto result = ((int_var * long_var) + double_var) / float_var;

    cout << "Type of result variable: " << typeid(result).name() << endl;

    return 0;

}