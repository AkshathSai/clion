#include <iostream>

using std::cout;
using std::endl;

int main() {

    /* int num_a = 100, num_b = 25;

    cout << "num_a + num_b = " << num_a + num_b << endl;
    cout << "num_a - num_b = " << num_a - num_b << endl;
    cout << "num_a / num_b = " << num_a / num_b << endl;
    cout << "num_a * num_b = " << num_a * num_b << endl;
    cout << "num_a % num_b = " << num_a % num_b << endl; */

    float num_a = 78.87f, num_b = 8.465f;

    cout << "num_a + num_b = " << num_a + num_b << endl;
    cout << "num_a - num_b = " << num_a - num_b << endl;
    cout << "num_a / num_b = " << num_a / num_b << endl;
    cout << "num_a * num_b = " << num_a * num_b << endl;
    // % (modulo operator doesn't allow flating point types and it'll throw compile time error)
    //cout << "num_a % num_b = " << num_a % num_b << endl; 

    /* Increment operator */
    int cars_with_cherry = 6;
    cout << "prefix increment: " << ++cars_with_cherry << endl;
    cout << "Cherry now has " << cars_with_cherry << " cars." << endl;

    int planes_with_cherry = 12;
    cout << "postfix increment: " << planes_with_cherry++ << endl;
    cout << "Cherry now has " << planes_with_cherry << " planes."<< endl;

    /* Decrement operator */
    cout << "prefix increment: " << --cars_with_cherry << endl;
    cout << "Cherry now has " << cars_with_cherry << " cars." << endl;

    cout << "postfix increment: " << planes_with_cherry-- << endl;
    cout << "Cherry now has " << planes_with_cherry << " planes."<< endl;

    /* Self assignment operators */
    int apples = 10;
    cout << "Originally I had " << apples << " apples" << endl;

    //addition assignment
    apples += 5;
    cout << "After adding I now have " << apples << " apples" << endl;

    //subtraction assignment
    apples -= 5;
    cout << "After subtracting I now have " << apples << " apples" << endl;

    //multiplication assignment
    apples *= 5;
    cout << "After multiplying I now have " << apples << " apples" << endl;

    //division assignment
    apples /= 5;
    cout << "After splitting amongst 5 friends each friend has " << apples << " apples" << endl;
  
    //modulo assignment 
    apples %= 4;
    cout << "After splitting amongst 4 friends and keeping the rest I now have " << apples << " apples" << endl;

    return 0;
}