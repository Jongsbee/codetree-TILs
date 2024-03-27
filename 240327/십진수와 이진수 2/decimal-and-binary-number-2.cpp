#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a;
    cin >> a;
    int answer = 0;
    int i=0;

    // 1. 10진수로 바꾸기

    while(a>0)
    {
        answer += (a%10) * pow(2,i);
        a /= 10;
        i++;
    }
    
    // 2. 17곱하기

    answer *= 17;

    // 3. 다시 2진수
    vector<int> vec;

    while(answer > 0)
    {
        vec.emplace_back(answer%2);
        answer /= 2;
    }

    for(int i=vec.size()-1; i>=0; i--)
    {
        cout << vec[i];
    }

    cout << endl;
    return 0;
}