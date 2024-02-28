/*Write a C++ code which checks whether number is Armstrong number or not*/


#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;

    cout<<"ENTER THE NUMBER";
    cin>>num;

    while(cin.fail())
    {
        cout<<"\n\t\tYOU HAVE NOT ENTERED A DIGIT!!!!!!";
        cout<<"\n\t\tENTER THE NUMBER AGAIN";
        cin.clear();
        cin.ignore(256, '\n');
        cin>>num;
    }


    int quotient,remainder,digit_count=0;
    int sum=0,temp;

    temp=num;
    while(temp>0)
    {
        quotient=temp/10;
        remainder=temp%10;
        digit_count++;
        temp=quotient;
    }

    temp=num;
    while(temp>0)
    {
        quotient=temp/10;
        remainder=temp%10;
        sum+=pow(remainder,digit_count);
        temp=quotient;
    }


    if(sum == num)
    {
        cout<<"\n ARM STROMG NUM ";
    }
    else
    {
        cout<<"\n NOT AN ARM STROMG NUM ";
    }


    
    return 0;
}