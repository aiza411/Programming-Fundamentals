/*Write a program to print Right triangle pattern with stars

    *
   **
  ***
 ****
*****

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
        for(int j=1 ; j<size-i ; j++)
        {
            cout<<" ";
        }

        for(int k=0 ; k<=i ; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}