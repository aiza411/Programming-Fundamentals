/*Write a C++ program to perform matrix multiplication*/

#include <iostream>
using namespace std;

int main()
{
    int matrix_1[2][2] = { {1,2} , {3,4} }; 
    int matrix_2[2][2] = { {4,5} , {6,7} }; 
    int result[2][2]; 
    
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            result[i][j]=0;
        }

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
            {
                result[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }

    cout << endl;
    cout << "Multiplication Result Matrix: " << endl;
    
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            cout << " " << result[i][j];
            if(j == 1)
                cout << endl;
        }

    return 0;
}