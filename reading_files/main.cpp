#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;


/* For reading structured data from a file */

int main() {

    ifstream input_file_stream("student_scores.txt");

    if(!input_file_stream) {
        cout << "The file student_scores.txt cannot be openend sucessfully";
        return 1;
    }

    while(input_file_stream) {

        string name;

        int math, english, science;

        std::getline(input_file_stream, name);

        input_file_stream >> math >> english >> science;

        //Ignore the newline after the last score
        input_file_stream.ignore();

        if(input_file_stream.eof()) {
            break;
        }

        cout << " Name : " << name
             << " Math : " << math
             << " English : " << english
             << " Science : " << science 
             << endl;

    }

    cout << "**** File reading completed ****";

    return 0;

}


/* For reading multi-string type values from a file */

/* int main() {

    ifstream input_file_stream("names.txt");

    if(!input_file_stream) {
        cout << "The file names.txt cannot be openend sucessfully";
        return 1;
    }

    while (true)
    {
        
        string string_var;

        // Extraction operator >> breaks at linespace hence,
        // For reading multi-string values we use getline()
        std::getline(input_file_stream, string_var);

        if(input_file_stream.eof()) {
            break;
        }
 
        cout << string_var << endl;
    }
    
    cout << "**** File reading completed ****";

    return 0;

} */


/* For reading String type values from a file */

/* int main() {

    ifstream input_file_stream("strings.txt");

    if(!input_file_stream) {
        cout << "The file strings.txt cannot be opened sucessfully" << endl;
        return 1;
    }

    while (true)
    {
        string string_var;

        input_file_stream >> string_var;

        if(input_file_stream.eof()) {
            break;
        }

        cout << string_var << endl;

    }
    
    cout << "**** File reading completed ****" << endl;

} */


/* For reading Floating type values from a file */

/* int main() {

    ifstream input_file_stream("floats.txt");

    if(!input_file_stream) {
        cout << "The file floats.txt cannot be opened sucessfully" << endl;
        return 1;
    }

    while (true)
    {
        float float_var;

        input_file_stream >> float_var;

        if(input_file_stream.eof()) {
            break;
        }

        cout << float_var << endl;

    }
    
    cout << "**** File reading completed ****" << endl;

    return 0;

} */


/* For reading Integer type values from a file */

/* int main() {

    ifstream input_file_stream("integers.txt");

    if(!input_file_stream) {
        cout << "The file integers.txt cannot be opened sucessfully" << endl;
        return 1;
    }

    while (true)
    {
        
        int int_var;

        input_file_stream >> int_var;

        if(input_file_stream.eof()) {
            break;
        }

        cout << int_var << endl;

    }

    cout << "**** File reading completed ****" << endl;
    
    return 0;

}    */