#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    int answer = 0;
    vector<vector<int>> vec(n, vector<int>(n));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            answer += 1;
            if(i%2==0) vec[n-j-1][n-i-1] = answer; 
            else vec[j][n-i-1] = answer;
        }
    }

    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec.size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}