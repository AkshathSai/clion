#include <iostream>

using std::cout;
using std::endl;

int main() {

    /*Because the boolean datatype is built into C++ and true and false are built-in keywords,
    We don't need to include stdbool.h as we would in C.*/ 
    bool is_valid = true;

    cout << "Is this valid? " << is_valid << endl;

    is_valid = false;

    cout<< "Is this valid? " << is_valid << endl;

    /* 0 (zero) evaluates to false and
    Any non-zero number evaluates to true */
    bool b1 = 0;
    bool b2 = 198;
    bool b3 = 435.98;
    bool b4 = -345.09;

    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;
    cout << "b3 = " << b3 << endl;
    cout << "b4 = " << b4 << endl;

    cout << "----- Logical operators & bool types -----" << endl;

    //Note: In C++ the boolean value printed out to console evaluates to:
    //0 for false  
    //1 for true
    /* Logical and Arithmetic operations */
    bool first_condition = 10 > 5;
    bool second_condition = 10 <= 5;

    int balance = 1000;

    bool balance_check = balance == 0;

    cout << "first_condition (10 > 5) = " << first_condition << endl;
    cout << "second_condition (10 <= 5) = " << second_condition << endl;
    cout << "balance_check (balance == 0) = " << balance_check << endl;

    cout << "----- Combining multiple relational expressions using the logical operators -----" << endl;

    /* Note: logical  or (||) and logical and (&&) feature short circuiting 
    meaning if 1 operand fails to meet a given condition then the second operand will not be evaluated at all */

    /* Combining multiple relational expressions using the logical operators */
    int a = 25;
    int b = 367;

    // && (logical and) - is a binary operator since it requires two operands
    bool result = (a > 10) && (b < 1000);
    cout << "(a > 10) && (b < 1000) = " << result << endl;

    // || (logical or) - is a binary operator since it requires two operands
    result = (a < 10) || (b < 1000);
    cout << "(a < 10) || (b < 1000) = " << result << endl;

    // ! (logical not) - is a unary operator since it requires only a single operand
    result = !(a < 100);
    cout << "(a < 100) = " << result << endl;

    return 0;

}