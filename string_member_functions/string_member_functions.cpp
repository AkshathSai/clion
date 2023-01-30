#include <iostream>
//#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {

    // Append chaining

    string proverb;

    cout << "Empty string proverb: " << proverb << endl;
    cout << "Length of Proverb: " << proverb.length() << endl;

    proverb.append("Once ").append("bitten ").append("twice ").append("shy ");

    cout << "Proverb (after update): " << proverb << endl;
    cout << "Length of Proverb (after update): " << proverb.length() << endl; 


    // SubString

    string another_good_proverb = "Persuasion is better than force";
    string first_word {another_good_proverb.substr(0,10)};

    cout << "First Word: " << first_word << endl;
    cout << "Second Word: " << another_good_proverb.substr(11, 2) << endl;
    cout << "Second Word onwards: " << another_good_proverb.substr(11, 100) << endl;
    cout << "Third Word onwards: " << another_good_proverb.substr(14) << endl;


    // Length of the String

    string proverb_1 = "A ship in the harbor is safe, but that is not what a ship is for.";
    string proverb_2 = "Never test the depth of water with both feet.";

    cout << "Proverb 1: " << proverb_1 << endl;
    cout << "Length of Proverb 1: " << proverb_1.length() << endl;

    cout << "Proverb 2: " << proverb_2 << endl;
    cout << "Length of Porverb 2: " << proverb_2.length() << endl;


    // Append

    string proverb_3 = "No gain without pain.";
    string proverb_4 = "No news is good news.";

    cout << "Proverb 3: " << proverb_3 << endl;
    cout << "Length of proverb_3 " << proverb_3.length() << endl; 

    proverb_3.append(proverb_4);

    cout << "Proverb 3 (after update): " << proverb_3 << endl;
    cout << "Length of Proverb 3 (after update): " << proverb_3.length() << endl;


    // String Comparision 

    string name_alice = "Alice";
    string name_peter = "Peter";

    cout << "Comparing Alice with Peter: " << name_alice.compare(name_peter) << endl;
    cout << "Comparing Peter with Alice: " << name_peter.compare(name_alice) << endl;
    cout << "Comparing Peter with Peter: " << name_peter.compare(name_peter) << endl;


    string name = "Alice Johnson";
    string name_john = "John";

    int result = name.compare(6, name_john.length(), name_john);
    
    cout << "Name contains \"John\" starting at index 6: " << result << endl;


    // Find

    string another_seemingly_good_proverb = "The harder you work, the luckier you get";
    
    cout << "Finding \"harder\": " << another_seemingly_good_proverb.find("harder") << endl;
    cout << "Finding \"work\": " << another_seemingly_good_proverb.find("work") << endl;
    cout << "Finding \"t\": " << another_seemingly_good_proverb.find('t') << endl; 

    //What if you search for a string that does not appear on the reciever?

    cout << "Finding \"unlucky\": " << another_seemingly_good_proverb.find("unlucky") << endl;
    cout << "Constant for illegal character positioning: " << std::string::npos << endl;

    return 0;
}