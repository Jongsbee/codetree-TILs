#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    int count = 0;
    int sum = 0;

    while(true)
    {
        cin >> age;
        if(age >= 30 || age < 20)
        {
            break;
        }
        count += 1;
        sum += age;
    }
    cout << fixed;
    cout.precision(2);

    cout << (float)sum / count << endl;
    return 0;
}