#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    const int MAX_INT = 100001;
    vector<int> vec(MAX_INT);
    int now = MAX_INT / 2;  // 50000;
    int maxX = MAX_INT / 2;
    int minX = MAX_INT / 2;

    int n;
    cin >> n;

    int a;
    char b;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(b == 'R')
        {
            for(int j=0; j<a; j++)
            {
                vec[now+j] = 1;
            }
            now += a - 1;
        }
        else if(b == 'L')
        {
            for(int j=0; j<a; j++)
            {
                vec[now-j] = -1;   
            }
            now -= a - 1;
        }
    }

    int A = 0;
    int B = 0;
    for(auto it = vec.begin(); it != vec.end(); ++it)
    {
        if(*it == 1) A++;
        else if (*it == -1) B++;
    }

    cout << B << " " << A;

    return 0;
}