#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    int answer = 0;
    int i = 0;
    cin >> a;

    while(a>0)
    {
        answer += pow(2,i)* (a%10); // a의 나머지를 더한다.
        i++;
        a /= 10;
    }

    cout << answer << endl;
    
    return 0;
}