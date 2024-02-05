/*Write a program to print Reverse Pyramid Star pattern with stars

*********
 *******
  *****
   ***
    *

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
    //     for(int j=0 ; j<i ; j++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for(int k=0 ; k<2*(size-i)-1 ; k++)
    //     {
    //         cout<<"*";
    //     }

        
      
    //     cout<<"\n";
    // }


    for(int i=size ; i>0 ; i--)
    {
        
        for(int j=size-i ; j>0 ; j--)
        {
            cout<<" ";
        }
        
        for(int k=i ; k>0 ; k--)
        {
            cout<<"* ";
        }
            
        
        cout<<"\n";
    }
    
    return 0;
}