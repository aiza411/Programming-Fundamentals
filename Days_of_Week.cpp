/*Write a C++ program to input week day(1-7) and print day of week name using switch case.
Sunday is numbered as 1, Monday as 2 and so on. If user enter 3 then Tuesday should be printed to screen.*/

#include <iostream>
using namespace std;

int main()
{

    int day_of_week;
    cout<<"\n\n\t\tENTER WEEK DAY";
    cin>>day_of_week;

    while(cin.fail())
    {
        cout<<"\n\t\tYOU HAVE NOT ENTERED A DIGIT!!!!!!";
        cout<<"\n\t\tENTER THE WEEK DAY AGAIN";
        cin.clear();
        cin.ignore(256, '\n');
        cin>>day_of_week;
    }

    switch(day_of_week)
    {
        case 1:
        cout<<"SUNDAY";
        break;

        case 2:
        cout<<"MONDAY";
        break;

        case 3:
        cout<<"TUESDAY";
        break;

        case 4:
        cout<<"WEDNESDAY";
        break;

        case 5:
        cout<<"THURSDAY";
        break;

        case 6:
        cout<<"FRIDAY";
        break;

        case 7:
        cout<<"SATURDAY";
        break;

        default:
        cout<<"INVALID DAY OF WEEK";

    }


    

    return 0;
}
