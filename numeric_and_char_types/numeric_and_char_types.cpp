#include <iostream>

using std::cout;
using std::endl;

/* Character Types */

//Espace literals 

int main() {

    char newline = '\n';
    char tab_horizontal = '\t';
    char tab_vertical = '\v';

    //The \\ (blac kslash) will print '\' in the console
    cout << "I" 
         << newline << "solemnly"
         << tab_horizontal << " swear"
         << tab_vertical << "that, \n I \v am \\ upto no \" good" << endl;

    return 0;

}

//Character literals
 
/* int main() {

    cout << "The size of char tyoe is " << sizeof(char) << " byte." << endl;

    // char lowercase_vowel = 'a';
    // char uppercase_vowel = 'A';
  
    int lowercase_vowel = 'a';
    int uppercase_vowel = 'A';

    cout << "The lowercase vowel is: " << lowercase_vowel << endl;
    cout << "The uppercase vowel is: " << uppercase_vowel << endl;

    return 0;

} */

/* Floating Types */

//Here case formatting doesn't matter L, F can easily be replaced with lowercase l,f 

/* int main () {
  
    cout << "Size of float is " << sizeof(float) << " bytes." << endl;
    cout << "Size of double is " << sizeof(double) << " bytes." << endl;
    cout << "Size of long double is " << sizeof(long double) << " bytes." << endl;

    //Suffix with F for floating types (F float indicates single precision)
    float balance = 1000.64F;
    //By default with precision will be double type no suffix required (double indicates double precision)
    double earths_gravity = 9.807;
    //For extended precision suffix with L (L long double for extended precision)
    long double planks_constant = 6.62607004e-34L;

    cout << endl << "Balance: " << balance << endl;
    cout << "Earth's gravity: " << earths_gravity << endl;
    cout << "Planck's constant: " << planks_constant << endl;

    return 0;

}*/

/* Integral Types */

//New modern concept in C & C++: Defining binary, octal and hexadecimal variables 
/* 
Prefix with 0b - Binary 
Prefix with 0 - Octal
Prefix with 0x - Hexadecimal
*/

/* int main() {

    cout << "binary 1010 is " << 0b1010 << " in decimal." << endl;
    cout << "octal 23 is " << 023 << " in decimal." << endl;
    cout << "hexadecimal 11a is " << 0x11a << " in decimal." << endl;

    return 0;
} */

/* Note: 
1. However it might be possible that you may be running the program in some arcane architecture where these 
types are not be defined in which case,  your program will fail to compile
2. You might incur some performance penality in your program. This might happen if the word lengths of the architecture 
don't perfectly align with the widhts of these fixed width types   
*/ 

/*If you don't like the idea of that y our code is going to run without knowing upfront
exactly what the size of int is going to be? C & C++ both make use of fixed width integers */

/*
using std::int8_t;
using std::int16_t;
using std::int32_t;
using std::int64_t;

int main () {

    cout << "Int sizes can be enforced by using fixed width integers" << endl;
    cout << "8-bit: " << sizeof(int8_t) << " byte." << endl;
    cout << "16-bit: " << sizeof(int16_t) << " bytes." << endl;
    cout << "32-bit: " << sizeof(int32_t) << " bytes." << endl;
    cout << "64-bit: " << sizeof(int64_t) << " bytes." << endl;

    return 0;
}*/

//Some other types available in C++ to hold integer values

/* int main() {

    cout << "Size of short is " << sizeof(short int) << " bytes." << endl;
    cout << "Size of long is " << sizeof(long int) << " bytes." << endl;
    //Still returns 8 bytes as long int, this has to do with lthe data model of the particular platform architecture
    cout << "Size of long long is " << sizeof(long long int) << " bytes." << endl; 

}*/

//Unsigned int
/* int main() {

    cout << "Size of ussinged is " << sizeof(unsigned int) << " bytes." << endl;

    unsigned int low_val = 0;
    unsigned int high_val = 4294967295; //2147483647 + 2147483648

    cout << "Unsigned int values can range between : " << low_val << " to " << high_val << endl;

    return 0;
  
}*/

//Signed int

/*int main() {

    cout << "Size of int is "<< sizeof(int) << " bytes." << endl;

    int positive_int_extreme = 2147483647;

    int negative_int_extreme = -2147483648;

    cout << "Signed int values can be ranged between: " << negative_int_extreme << " to " << positive_int_extreme << endl;

    positive_int_extreme = 2147483648; // 2147483647 + 1
    negative_int_extreme = -2147483649; // -2147483648 - 1

    cout << "If we exceed the range the results are strange: " << negative_int_extreme << " to " << positive_int_extreme << endl;

    cout << "This results in a long to int conversion. " << endl;

    return 0;

}*/