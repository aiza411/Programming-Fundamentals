/*Display all the numbers less then 20 that are divisible by 2 and 3 both.*/


#include <iostream>
using namespace std;

int main()
{
    cout<<"\n MULTIPLES OF 2 AND 3 ARE : \n";
    for(int i=1 ; i<20 ; i++)
    {
        if(i%2==0 && i%3==0)
        {
            cout<<i<<"\n";
        }
    }    

    return 0;
}