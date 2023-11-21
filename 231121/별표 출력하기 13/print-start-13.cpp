#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    vector<string> vec(n);

    // 짝수번째일때는 1씩 감소
    // 홀수번째 일때는 1씩 증가



    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout << "* ";
        }
        cout << endl;

        for(int j=n-i-1; j<n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}