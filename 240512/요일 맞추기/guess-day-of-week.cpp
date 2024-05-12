#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    vector<int> months = 
    {
        0,31,28,31,30,31,30,31,31,30,31,30,31
    };
    vector<string> days = 
    {
        "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"
    };

    int td_1 = 0;
    int td_2 = 0;
    
    // 두 날짜의 차이만 알면 되는건가?
    for(int i=1; i<a; i++)
    {
        td_1 += months[i];
    }
    td_1 += b;

    for(int i=1; i<c; i++)
    {
        td_2 += months[i];
    }
    td_2 += d;

    // 음수를 나누면 어떻게되지

    int total = (td_2 - td_1)%7;

    // cout << "Total : " << total << endl;
    if(total >= 0) 
    {
        cout << days[total] << endl;
    }
    else
    {
        cout << days[abs(abs(total)-7)] << endl;
    }



    return 0;
}