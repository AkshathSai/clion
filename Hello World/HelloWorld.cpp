#include <iostream>

using std::cout; //Good practice
using std::endl; //Good practice

int main() {

    cout << "Hello World!" << endl;

    return 0; 
 
} 

/* #include <iostream>

using namespace std; //Not recommended practice

int main() {

    cout << "Hello World!" << endl;

    return 0; 
 
} */

/* Without using namespace

#include <iostream>

int main() {

    std::cout << "Hello World!" << std::endl;

    return 0; 
 
}

*/