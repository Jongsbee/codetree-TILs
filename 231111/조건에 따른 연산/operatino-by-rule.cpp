#include <iostream>
using namespace std;
int cnt = 0;
int function(int);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    while(n<1000)
    {
        n = function(n);
    }

    cout << cnt << endl;
    return 0;
}

int function(int n)
{
        if(n%2==0)
    {
        n = n*3 + 1;
    }
    else
    {
        n = n*2 + 2;
    }
    cnt += 1;

    return n;
}