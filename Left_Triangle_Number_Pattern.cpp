/*Write a program to print Left Triangle Number pattern

1
12
123
1234
12345

*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout<<"ENTER THE SIZE";
    cin>>size;

    while(cin.fail())
    {
        cout<<"\n\t\tYOU HAVE NOT ENTERED A DIGIT!!!!!!";
        cout<<"\n\t\tENTER THE SIZE AGAIN";
        cin.clear();
        cin.ignore(256, '\n');
        cin>>size;
    }


    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            cout<<j+1;
        }

        cout<<"\n";
    }


    
    return 0;
}