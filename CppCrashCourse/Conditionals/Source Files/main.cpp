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
/*     if (isTodayWeekend)
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
    } */

//-----------------------------------------------------------------------------
    // Switch
    // Check on multiple values other than bools
//-----------------------------------------------------------------------------
    //Enums consider inner values using their integer ordering
    // 0 the first
    //1 the second ...
    enum EyeColor
    {
        Brown,
        Blue,
        Green,
        Gray,
        Other
    };

    EyeColor eyeColor = Brown;

/*     switch (<expression>)
    {
    case <constant-expression> :
          <code> 
        break;
    [...]
    default:
        break;
    } */
    switch (eyeColor)
    {   
    case Brown:
        /* code */
        cout << "The color is:" << eyeColor << endl;
        break;
    case Blue:
        cout << "The color is:" << eyeColor << endl;
        break;
    case Green:
        cout << "The color is:" << eyeColor << endl;
        break;
    case Gray:
        cout << "The color is:" << eyeColor << endl;
        break;
    default:
        cout << "Other" << endl;
        break;
    }
}