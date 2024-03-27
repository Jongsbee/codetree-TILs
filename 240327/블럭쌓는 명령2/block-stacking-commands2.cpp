#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,K;
    cin >> N >> K;

    vector<int> vec(N+1);
    int a = 0;
    int b = 0;

    for(int i=0; i<K; i++)
    {
        cin >> a >> b;  

        for(int j=a; j<=b; j++)
        {
            vec[j] += 1;
        }
        
    }
    // 2. 최댓값 찾기
    int max = 0;

    for(int i=0; i<N+1; i++)
    {
        max = max > vec[i] ? max : vec[i];
    }

    cout << max << endl;

    return 0;
}