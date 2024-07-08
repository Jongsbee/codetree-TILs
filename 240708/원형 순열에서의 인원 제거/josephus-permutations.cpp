#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> que;
    int N, K;
    cin >> N >> K;
    
    for(int i=1;i <=N; i++)
    {
        que.push(i);
    }

    while(!que.empty())
    {
        for(int i=1; i<K; i++)
        {
            que.push(que.front());
            que.pop();
        }
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
    return 0;
}