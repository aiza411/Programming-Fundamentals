#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    char output_text;

    ifstream infile;
    infile.open("testfile.txt");
    infile >> output_text;
    while (!infile.eof())
    {
        cout << output_text << endl;
        infile >> output_text;
    }

    infile.close();
    return 0;
}