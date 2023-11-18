#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    vector<vector<int>> maps(n,vector<int>(n,0));

    for(int i=0; i<n; i++)
    {
        maps[0][i] = 1;
        maps[i][0] = 1;
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            maps[i][j] = maps[i-1][j] + maps[i][j-1] + maps[i-1][j-1];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << maps[i][j] << " " ;
        }
        cout << endl;
    }
    




    return 0;
}