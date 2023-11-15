#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    cin >> n;
    int minimum = 100;
    int prev, next;

    cin >> prev;
    for(int i=1;i<=n-1;i++)
    {
       cin >> next;
       minimum = min(minimum,next-prev);
       prev = next;
    }

    cout << minimum << endl;
    return 0;
}