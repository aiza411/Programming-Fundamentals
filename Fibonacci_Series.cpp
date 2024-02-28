/*Write a C++ program to display Fibonacci series. Try it with for loop,
while loop*/

/*
0,1,1,2,3,5,8,13....
*/

#include <iostream>
using namespace std;

int main()
{
    int count;
    int num1=0,num2=1,sum;


    cout<<"\n\n\t\tENTER THE COUNT OF NUMBERS YOU WANT IN SERIES";
    cin>>count;

    while(count<0)
    {
        cout<<"\n\t\tYOU HAVE ENTERED A NEGATIVE NUMBER!!!!!!";
        cout<<"\n\t\tENTER THE COUNT OF NUMBER AGAIN";
        cin>>count;
    }

    cout<<num1<<" ";
    cout<<num2<<" ";

    while(count!=0)
    {
        sum=num1+num2;
        num1=num2;
        num2=sum;

        cout<<num2<<" ";

        count--;
    }

    

    return 0;
}
