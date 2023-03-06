#include <iostream>

using namespace std;

int main ()
{
    // && = and
    // || =  or
    // !  = not
    cout << "Conditionals!" << endl;

    bool isTheWeatherGoodToday = false;
//-----------------------------------------------------------------------------
    //IF Inline
//-----------------------------------------------------------------------------
    // <condition> ? <execIfTrue> : <execIfFalse>
    // isTheWeatherGoodToday ? cout << "Yes" << endl : cout << "No" << endl;

//-----------------------------------------------------------------------------
    // IF - else
    // Multiple condition
//-----------------------------------------------------------------------------
    bool isTodayWeekend = false;


/*     if (isTodayWeekend && isTheWeatherGoodToday)
    {
        cout << "Go to the park" << endl;
    }
    else if (isTodayWeekend and not isTheWeatherGoodToday)
    {
        cout << "Take an umbrella" << endl;
    }
    else
    {
        cout << "Work time!" << endl;
    } */

//-----------------------------------------------------------------------------
    // Nested Conditions
//-----------------------------------------------------------------------------
    if (isTodayWeekend)
    {
        if (isTheWeatherGoodToday)
        {
            cout << "Go to the park" << endl;
        }
        else
        {
            cout << "Go to the park but take an Umbrella" << endl;
        }
    }
    else
    {
        cout << "Go to work" << endl;
    }


}