/*Write a program to print Pyramid Star pattern with stars

    *
   ***
  *****
 *******
*********

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

    // for(int i=0 ; i<size ; i++)
    // {
        
    //     for(int j=0 ; j<size-i-1 ; j++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for(int k=0 ; k<2*i+1 ; k++)
    //     {
    //         cout<<"*";
    //     }
            
        
    //     cout<<"\n";
    // }


    for(int i=0 ; i<size ; i++)
    {
        
        for(int j=size-i ; j>0 ; j--)
        {
            cout<<" ";
        }
        
        for(int k=1 ; k<=i ; k++)
        {
            cout<<"* ";
        }
            
        
        cout<<"\n";
    }


    
    return 0;
}