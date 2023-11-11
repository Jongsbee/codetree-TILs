#include <iostream>
#include <queue>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
 
    priority_queue<int, vector<int>, less<int>> pq;

    int a,b,c;

    cin >> a >> b >> c;
    pq.push(a);
    pq.push(b);
    pq.push(c);

    pq.pop();
    cout << pq.top() << endl;

    return 0;
}