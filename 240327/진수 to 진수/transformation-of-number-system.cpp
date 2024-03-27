#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,n;
    cin >> a >> b;
    cin >> n;

    int answer = 0;
    int i=0;

    // 1. n을 10진수로 바꾸기

    while(n>0)
    {
       answer +=  (n%10) * pow(a,i);
       i++;
       n /= 10;
    }

    // 2. 다시 b진수로 바꾸기

    vector<int> vec;
    while(answer > 0)
    {
        vec.emplace_back(answer%b);
        answer /= b;
    }

    for(int i=vec.size()-1; i>=0; i--)
    {
        cout << vec[i];
    }


    return 0;
}