/*Print Prime number or not*/


#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"\n\n\t\tENTER A NUMBER";
    cin>>num1;

    while(num1<0)
    {
        cout<<"\n\t\tYOU HAVE ENTERED A NEGATIVE NUMBER!!!!!!";
        cout<<"\n\t\tENTER THE NUMBER AGAIN";
        cin>>num1;
    }

    if(num1==1)
    {
        cout<<"1 IS NEITHER PRIME NOR COMPOSITE";
    }

    for(int i=2 ; i<num1/2 ; i++)
    {
        if(num1%i==0)
        {
            cout<<"NOT A PRIME NUMBER";
            return 0;
        }
    }

    cout<<"PRIME NUMBER";

    return 0;
}