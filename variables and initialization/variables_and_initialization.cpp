#include <iostream>

using std::cout;
using std::endl;

/* int main() {

    int cost; //Declaring a variable

    cout << "Premium laptops start from: $ " << cost << endl;

    cost = 2500; //Initializing a variable

    cout << "Premium laptops start  from: $ " << cost <<endl;

    return 0;

} */ 

 
/* Assignment notation */

/* int main() {

    int balance = 1000;
    int withdraw = 200;
    int final_balance = balance - withdraw;

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdraw << endl;
    cout << "My final account balance is: $" << final_balance << endl;

    return 0;

} */

/* Functional notation */

/* int main() {

    int balance(1000);
    int withdraw(200);
    int final_balance(balance - withdraw);

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $ " << withdraw << endl;
    cout << "My final account balance is: $" << final_balance << endl;

    return 0;
 
} */

/* Braced Initializer */

/* int main() {
    
    int balance {1000};
    int withdraw {200};
    int final_balance {balance - withdraw};

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdraw << endl;
    cout << "My final account balance is: $" << final_balance << endl;

    return 0;

}*/

/* Truncating will happen when converting floating points to int (the part after the point will be ignored) */
int main() {

    int yeterdays_balance = 1000.45; //will throw warning but build will be successful 
    int todays_balance (1000.45); //will throw warning but build will be successful 
    int current_balance {1000.45}; //will throw an error and build will fail (This is an important reason to prefer the modern barced intializer)
 
    cout << "My current account balance is: $" << yeterdays_balance << endl;
    cout << "I need to withdraw: $" << todays_balance << endl;
    cout << "My final account balance is: $" << current_balance << endl;

    return 0; 

}