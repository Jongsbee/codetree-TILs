#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<string> days = 
    {
        "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" 
    };

    vector<int> months = 
    {
        0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };


    int m1, m2, d1, d2, total;

    total =  0;

    cin >> m1 >> d1 >> m2 >> d2;
    
    for(int i=m1; i<m2; i++)
    {
        total += months[i];
    }
    total = total + d2 - d1;
    int answer = total / 7;
    string day;
    cin >> day;

    for(int i=0; i<=total%7; i++)

    {
        if(days[i] == day)
        {
            answer += 1;
            break;
        }
    }
    

    cout << answer << endl;
    
    return 0;
}