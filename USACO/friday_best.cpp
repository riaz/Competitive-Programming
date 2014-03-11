/*
ID: riaz.201
PROG: friday
LANG: C++
*/
#include<iostream>
#include<fstream>

using namespace std;

int weekDayCount(int days, int weekDays[], int & currentWeekDay)
{

for(int day = 1; day <= days; day++)
{      
    if(day == 13)
    {
        weekDays[currentWeekDay]++;
    }

    currentWeekDay++;

    if(currentWeekDay == 7) currentWeekDay = 0;
}
}

int main()
{
int currentWeekDay = 0;
int years;

ifstream in("friday.in");
ofstream fout("friday.out");

in >> years;

in.close();

int weekDays[7] = {0};

for(int y = 1900; y <= (1900 + years) - 1; y++) // Years
{    
    for(int m = 1; m <= 12; m++) // Months
    {
        if(m == 11 || m == 4 || m == 6 || m == 9) // 30 days
        {
            weekDayCount(30, weekDays, currentWeekDay);
        }
        else if(m == 2) // February
        {
            if(y % 100 != 0 && y % 4 == 0) // If a leap year - 29 days
            {
                weekDayCount(29, weekDays, currentWeekDay);
            }
            else if(y % 100 == 0 && y % 400 == 0) // If a century leap year
            {
                cout << "Leap century: " << y << endl;
                weekDayCount(29, weekDays, currentWeekDay);
            }
            else // 28 days
            {
                weekDayCount(28, weekDays, currentWeekDay);
            }
        }
        else // Else 31 days
        {
            weekDayCount(31, weekDays, currentWeekDay);
        }
    }
}
 fout << weekDays[5] << " " << weekDays[6] << " " << weekDays[0] << " " << weekDays[1] << " " << weekDays[2] << " " << weekDays[3] << " " << weekDays[4] << '\n';
}
