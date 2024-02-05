/*Write a program that takes two number from user if num1 is greater then num2 then add both the numbers in num3
and display their num3.Else, subtract num1 from num2 and store it in num3.*/

#include <iostream>
using namespace std;

int main()
{

    int num1,num2,num3;
    cout<<"\n\n\t\tENTER FIRST NUMBERS";
    cin>>num1;

    while(cin.fail())
    {
        cout<<"\n\t\tYOU HAVE NOT ENTERED A DIGIT!!!!!!";
        cout<<"\n\t\tENTER THE FIRST NUMBER AGAIN";
        cin.clear();
        cin.ignore(256, '\n');
        cin>>num1;
    }

    cout<<"\n\n\t\tENTER SECOND NUMBERS";
    cin>>num2;

    while(cin.fail())
    {
        cout<<"\n\t\tYOU HAVE NOT ENTERED A DIGIT!!!!!!";
        cout<<"\n\t\tENTER THE SECOND NUMBER AGAIN";
        cin.clear();
        cin.ignore(256, '\n');
        cin>>num2;
    }

    if(num1>num2)
    {
        num3=num1+num2;
        cout<<"\n\n\t\tSUM OF "<<num1<<" AND "<<num2<<" IS "<<num3;
    }

    else
    {
        num3=num2-num1;
        cout<<"\n\n\t\tSUBTARCTION OF "<<num1<<" AND "<<num2<<" IS "<<num3;
    }

    
    

    return 0;
}