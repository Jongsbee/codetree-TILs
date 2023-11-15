#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;
    vector<vector<int>> answer(n);
    vector<vector<vector<int>>> vec(2);

    for(int i=0; i<2; i++)
    {   
        vec[i].resize(n);
        for(int j=0; j<n; j++)
        {
            vec[i][j].resize(m);
            for(int k=0; k<m; k++)
            {
                cin >> vec[i][j][k];
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        answer[i].resize(m);
        for(int j=0; j<m; j++)
        {
            if(vec[0][i][j] == vec[1][i][j]) answer[i][j] = 0;
            else answer[i][j] = 1;

            cout << answer[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}