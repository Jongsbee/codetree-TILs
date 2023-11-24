#include <iostream>

using namespace std;

void starUp(int n)
{
    if(n==0) return;

    for(int i=0; i<n; i++)
    {
        cout << "* ";
    }
    cout << endl;

    starUp(n-1);
}
void starDown(int n, int target)
{
    if(n == target+1) return;
    for(int i=0; i<n; i++)
    {
        cout << "* ";
    }
    cout << endl;

    starDown(n+1, target);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    starUp(n);
    starDown(1,n);

    return 0;
}