#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;

    vector<int> vec(n);
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;
        int answer = 0;
        for(int j=a; j<=b; j++)
        {
            answer += vec[j-1];
        }
        cout << answer << endl;
    }



    return 0;
}