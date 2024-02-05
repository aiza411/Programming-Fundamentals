/*write a c++ program that will take TWO numbers from user and
if the two numbers are non-negative then prints the largest number to the screen,
else display "numbers are negative"*/


#include <iostream>
using namespace std;

int main()
{
    cout<<"\n\tTHIS PROGRAM WILL TAKE TWO NUMBERS (NON NEGATIVE AND GIVES YOU THE SUM";

    int num1,num2,sum;
    cout<<"\n\n\t\tENTER FIRST NUMBERS";
    cin>>num1;

    cout<<"\n\n\t\tENTER SECOND NUMBERS";
    cin>>num2;

    if(num1>0 && num2>0)
    {
        sum=num1+num2;
        cout<<"\n\n\t\tSUM OF "<<num1<<" AND "<<num2<<" IS "<<sum;
    }

    else
    {
        cout<<"\n\n\t\tNUMBERS ARE NEGATIVE";
    }

    

    return 0;
}
