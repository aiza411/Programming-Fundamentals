/*Write a program to print L with stars

*      
*      
*      
*      
*******

*/

#include <iostream>
using namespace std;

int main()
{
    int height = 5; 
    int width = (2 * height) - 1;
    int i,j;


    for (i = 0; i < height; i++)  
    { 
        cout<<"*"; 
        for (j = 0; j <= height; j++) 
        { 
            if (i == height - 1)
            {
                cout<<"*"; 
            } 
                
            else
            {
                cout<<" "; 
            }
        } 
        cout<<"\n"; 
    } 

    
    return 0;
}