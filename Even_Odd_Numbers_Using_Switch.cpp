/*Print Even and Odd Numbers Using Switch*/


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

    cout<<"The Number is : " <<num1 <<endl;

    switch (num1)
    {
        case 0 :
        cout<<"The number is zero" <<endl;
        break;

        default:
        cout<<"The number is a non-zero integer" <<endl;

        int b = num1 % 2;
        switch (b)
        {
            case 0:
            cout<<"The number is even" <<endl;
            break;

            case 1:
            cout<<"The number is odd" <<endl;
            break;
        }

    }

    return 0;
}