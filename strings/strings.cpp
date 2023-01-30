#include <iostream>

using std::cout;
using std::endl;
using std::string;

//Using braced Initializers in order to create one string object from another

int main() {

    string proverb_1 {"A Bad worker always blames his tools"};
    
    //Initialize one string with the contents of other string 
    string proverb_2 {proverb_1};

    //Initialize with 11 characters starting at index 2
    string proverb_part {proverb_1, 2, 11};

    //Repeat character 's' 10 times
    string repeated_s (10, 's');

    cout << "proverb_1: " << proverb_1 << endl;
    cout << "proverb_2: " << proverb_2 << endl;
    cout << "proverb part: " << proverb_part << endl;
    cout << "repeated_s: " << repeated_s << endl; 

    return 0;

}



/* Interoperability between C and C++ strings

int main () {

    string proverb_1 = "A Bad worker always blames his tools";
    string proverb_2 {"A journey of thousand miles begin with a single step"};

    //Invoking c_str() function of string class on proverb_1 object 
    const char* proverb_1_cstr = proverb_1.c_str(); //c_str() function return type is const char* hence it cannote be modifed

    // Note: before C++ 17 Version both c_str() and data() used to return const char* 

    //Invoking data() function of string class on proverb_2 object
    char* proverb_2_cstr_nonconst = proverb_2.data(); //data() function return type is char* hence it can be modified 

    cout << "C-Style String: " << proverb_1_cstr << endl;
    cout << "Another C-Style String: " << proverb_2_cstr_nonconst << endl;

    //proverb_1_cstr[0] = 'a'; //Will throw an error as we cannot modify it
    //proverb_2_cstr_nonconst[0] = 'a'; //Will be modified

    return 0;
} */


/* Creating C++ style strings  

int main() {

    string proverb_1 = "A bad worker always blames his tools";
    string proverb_2 {"A journey of thousand miles begins with a single step"};
    string empty_string;

    cout << "C++ style string: " << proverb_1 << endl;
    cout << "Another C++ style string: " << proverb_2 << endl;
    cout << "Empty string: " <<  empty_string << endl;

    return 0;

}*/

/* Good old C days */


/* #include <cstdio>
#include <cstring>

int main() {

    //Will throw a warning
    //char* proverb_1 = "A bad worker always blames his tools";
    //Very brutal and hacky way [not a best practice]
    //char* proverb_1 = (char*) "A bad worker always blames his tools";
    //Best Practice
    const char* proverb_1 = "A bad worker always blames his tools";
    char proverb_2[60] = "A journey of thousand miles begins with a single step";

    printf("Here is a C-style string: %s\n", proverb_1);
    printf("Length of the first string: %lu\n", strlen(proverb_1));

    printf("Here is another C-style string: %s\n", proverb_2);
    printf("Lenght of the second string: %lu\n", strlen(proverb_2));

    return 0;

} */