/*Write a program to print A with stars

    **    
   *  *   
  ******  
 *      * 
*        *

*/

#include <iostream>
using namespace std;

int main()
{
    int height = 5; 
    int width = (2 * height) - 1;
    int i,j;

    int n = width/2;

    for (i = 0; i < height; i++)  
    { 
        for (j = 0; j <= width; j++) 
        { 
            if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n))) 
            {
                cout<<"*"; 
            }
 
            else
            {
                cout<<" "; 
            }      
        } 
        cout<<"\n"; 
        n--; 
    } 



    
    
    return 0;
}