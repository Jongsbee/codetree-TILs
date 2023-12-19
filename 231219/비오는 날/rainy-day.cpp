#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    class Forecast
    {
        public : 
            string date, day, weather;

        Forecast(string date, string day, string weather)
        {
            this -> date = date;
            this -> day = day;
            this -> weather = weather;
        }

        Forecast(){}

        bool operator < (Forecast &forecast)
        {
            return this -> date < forecast.date;
        }
        
    };

    int n;
    cin >> n;

    vector<Forecast> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i].date >> vec[i].day >> vec[i].weather;
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++)
    {

        // cout << vec[i].date << endl;
        if(vec[i].weather == "Rain")
        {
            cout << vec[i].date << " " << vec[i].day << " " << vec[i].weather << endl;
            break;
        }
    }



    return 0;
}