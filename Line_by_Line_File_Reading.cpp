#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{

    string output_text;

    ifstream infile;
    infile.open("testfile.txt");

    while (getline (infile, output_text))
    {    
        cout << output_text <<endl;
    }

    infile.close();

    return 0;
}