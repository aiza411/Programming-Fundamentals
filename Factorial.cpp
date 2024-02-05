/*Problem: Write a program that calculate the factorial of a number.*/

#include <iostream>
using namespace std;

int main()
{

    int num1,fact=1;
    cout<<"\n\n\t\tENTER A NUMBER";
    cin>>num1;

    while(num1<0)
    {
        cout<<"\n\t\tYOU HAVE ENTERED A NEGATIVE NUMBER!!!!!!";
        cout<<"\n\t\tENTER THE NUMBER AGAIN";
        cin>>num1;
    }


    for(int i=1; i<=num1 ; i++)
    {
        fact*=i;
    }

    cout<<"FACTORIAL OF "<<num1<<" IS "<<fact;
    return 0;
}
