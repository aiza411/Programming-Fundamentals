/*Write a program to print Pascal Triangle pattern

*   *
 * * 
  *  
 * * 
*   *

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
        int count=1;
        
        for(int j=size-i ; j>0 ; j--)
        {
            cout<<" ";
        }
        
        for(int k=1 ; k<=i ; k++)
        {
            cout<<count<<" ";
            count=count*(i-k)/k;
        }
            
        
        cout<<"\n";
    }

    
    return 0;
}