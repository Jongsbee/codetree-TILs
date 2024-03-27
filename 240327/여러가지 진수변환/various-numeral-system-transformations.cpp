#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    vector<int> vec;

    int a,b;
    cin >> a >> b;
    int answer = 0;
    int i = 0;

    while(a > 0)
    {

        // 분해의 역순
        // 각 자리들을 b의 i곱으로 더한다
        // 나누었을때의 몫과 나머지를 역순으로 체크
        
        vec.emplace_back(a%b);
        // cout << a%b << endl;
        a /= b;
        i++;
        
    }

    for(int i=vec.size()-1; i>=0; i--)
    {
        cout << vec[i];
    }

    cout << endl;

    
    return 0;
}