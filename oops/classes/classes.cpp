#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* Singleton Design Pattern relies on making constructors private*/

//Constructors

class BankAccount {

    private:
        string name {};
        float balance {0};
    
    public:

        /** Constructor Overloading 
         *  - Same name but different parameters 
        */

        //Requesting the compiler to provide the default constructor 
        BankAccount() = default;

        // BankAccount() {
        //     cout << "Default constructor called" << endl;
        // }

        BankAccount(string n, float b) {

            name = n;
            balance = b;

            cout << "BankAccount Constructor for: " << name << " balance: " << balance << endl;

        }

        string get_name() {
            return name;
        }

        float get_balance() {
            return balance;
        }

};

int main() {

    BankAccount duke_account {"Duke", 1500.55f};
    BankAccount tux_account {"Tux", 2566.887f};
    BankAccount sarah_account;

    return 0;
}



//For Private Access Modifiers - getters/setters approach

/* 
class BankAccount {

    private:

        string name {};
        float balance {0};

    public:

        void set_name(string n) {
            name = n;
        }

        string get_name() {
            return name;
        }

        void set_balance(float b) {
            balance = b;
        }

        float get_balance() {
            return balance;
        }

};

int main() {

    BankAccount duke_account;
    BankAccount tux_account;

    cout << "---- Duke's Account ----" << endl;

    duke_account.set_name("Duke");
    duke_account.set_balance(1500);

    cout << duke_account.get_name() << endl;
    cout << duke_account.get_balance() << endl;


    cout << "---- Tux's Account ----" << endl;

    tux_account.set_name("Tux");
    tux_account.set_balance(2500);

    cout << tux_account.get_name() << endl;
    cout << tux_account.get_balance() << endl;

    return 0;

} */


//For Public Access Modifiers

/*
class BankAccount {

    //Public Access modifier variables
    public:
        string name {};
        float balance {0};

};

//For Public Access Modifiers
int main() {

    BankAccount duke_account;
    BankAccount tux_account;
    
    cout << "---- Duke's Account ----" << endl;
    
    duke_account.name = "Duke";
    duke_account.balance = 2500;

    cout << duke_account.name << endl;
    cout << duke_account.balance << endl;

    cout << "----Tux's Account ----" << endl;

    tux_account.name = "Tux";
    tux_account.balance = 1500;

    cout << tux_account.name << endl;
    cout << tux_account.balance << endl; 
    
    return 0;

} */