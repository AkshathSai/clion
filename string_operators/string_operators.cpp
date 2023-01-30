#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {

    //Acessing characters from a string [] -> indexing operator 

    string proverb = "The harder you work, the luckier you get.";

    cout << "First Character: " << proverb[0] << endl;
    cout << "Character at Index 21: " << proverb[21] << endl;
    cout << "Last character: " << proverb[proverb.length() - 1] << endl;

    cout << "Character at out of range index: " << proverb[proverb.length() + 10] << endl;


    //Set or modify characters of a string 

    cout << "Original string: " << proverb << endl;

    proverb[1] = 'H';
    proverb[2] = 'E';

    cout << "Updated string: " << proverb << endl; 

    //Concatenating operator

    string part_1 = "When one door shuts";
    string part_2 = "another opens";

    cout << "Concatenated string: " << part_1 + " " + part_2 << endl;

    //The two strings are constant string literals, and the “+” operator does not work with all literal operands
    //string proverb = "When one door shuts " + "another opens"; //Will throw an error cannot have two binary operands
    string another_proverb = "When one door shuts " + part_2;

    cout << "Concatenated string: " << another_proverb << endl;


    //Other operators

    string name_alice = "Alice";
    string name_peter = "Peter";

    //Comparatively better than .compare method as we cannot interpret the return type 
    cout << "Is Alice > Peter: " << (name_alice > name_peter) << endl;
    cout << "Is Alice < Peter: " << (name_alice < name_peter) << endl;

    cout << "Is Alice >= Peter: " << (name_alice >= name_peter) << endl;
    cout << "Is Peter <= Peter: " << (name_peter <= name_peter) << endl;
    cout << "Is Peter == Peter: " << (name_peter == name_peter) << endl;
    cout << "Is Peter != Peter: " << (name_peter != name_peter) << endl;

    return 0;

} 