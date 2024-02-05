/*Display multiples of 5 less then 40 starting from 1.*/


#include <iostream>
using namespace std;

int main()
{
    cout<<"\n MULTIPLES OF 5 ARE : \n";
    for(int i=1 ; i<40 ; i++)
    {
        if(i%5==0)
        {
            cout<<i<<"\n";
        }
    }    

    return 0;
}