#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//using std::cout;
//using std::endl;
//using std::ifstream;
//using std::string;

int main() {

    string str;

    ofstream outfile1("one.txt");

    outfile1 << "aaa";

    outfile1.close();

    ofstream outfile2("one.txt", ios::app);

    outfile2 << "bbb";

    outfile2.close();

    ifstream infile("one.txt");
    
    infile >> str;
    cout << str;

    return 0;
}

/* 
int main() {

    string str;

    ofstream outfile1("one.txt");

    outfile1 << "aaa";

    outfile1.close();

    ofstream outfile2("one.txt");

    outfile2 << "bbb";

    outfile2.close();

    ifstream infile("one.txt");
    
    infile >> str;
    cout << str;

    return 0;
} */

/* int main() {

    string str;

    ofstream outfile1("one.txt");

    outfile1 << "aaa";

    outfile1.close();

    ofstream outfile2("one.txt");

    outfile2 << "bbb";

    outfile2.close();

    ifstream infile("one.txt");
    cout << infile.rdbuf();

    return 0;
} */

/* int main() {

    string str;

    ofstream outfile("one.txt");

    outfile << "bbb";

    outfile.close();

    ifstream infile("one.txt");
    infile >> str;
    cout << str;

    return 0;
} */