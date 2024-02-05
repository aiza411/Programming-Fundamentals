/*Display the first 10 natural numbers.*/
/*Display first 10 natural numbers in descending order.*/


#include <iostream>
using namespace std;

int main()
{
    cout<<"\n FIRST 10 NATURAL NUMBERS IN ASCENDING ORDER ARE : \n";
    for(int i=1 ; i<=10 ; i++)
    {
        cout<<i<<"\n";
    }    

    
    cout<<"\n FIRST 10 NATURAL NUMBERS IN DESCENDING ORDER ARE : \n";
    for(int i=10 ; i>0 ; i--)
    {
        cout<<i<<"\n";
    }  
    return 0;
}