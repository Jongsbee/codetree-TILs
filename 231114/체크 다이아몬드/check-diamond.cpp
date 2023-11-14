#include <iostream>

using namespace std;

void star(int a, int n);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int k=1; k<=n; k++)
    {
        star(k,n);
    }
    for(int k=n-1; k>=1; k--)
    {
        star(k,n);
    }

    return 0;
}

void star(int a, int n)
{
    for(int i=1; i<=n-a;i++)
    {
        cout << " ";
    }
    for(int j=1; j<=2*a-1;j++)
    {
        if(j%2==1) cout << '*';
        else cout << ' ';
    }
        for(int i=1; i<=n-a;i++)
    {
        cout << " ";
    }
    cout << endl;
}