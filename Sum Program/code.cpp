/*Problem: Write a program that accepts two non-negative integers from the user and display their sum.*/

#include <iostream>
using namespace std;

int main()
{
    cout<<"\n\tTHIS PROGRAM WILL TAKE TWO NUMBERS (NON NEGATIVE AND GIVES YOU THE SUM";

    int num1,num2,sum;
    cout<<"\n\n\t\tENTER FIRST NUMBERS";
    cin>>num1;

    while(num1<0)
    {
        cout<<"\n\t\tYOU HAVE ENTERED A NEGATIVE NUMBER!!!!!!";
        cout<<"\n\t\tENTER THE FIRST NUMBER AGAIN";
        cin>>num1;
    }

    cout<<"\n\n\t\tENTER SECOND NUMBERS";
    cin>>num2;

    while(num2<0)
    {
        cout<<"\n\t\tYOU HAVE ENTERED A NEGATIVE NUMBER!!!!!!";
        cout<<"\n\t\tENTER THE SECOND NUMBER AGAIN";
        cin>>num2;
    }

    sum=num1+num2;
    cout<<"\n\n\t\tSUM OF "<<num1<<" AND "<<num2<<" IS "<<sum;

    return 0;
}
