#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<string> vec = 
    {"push", "pop", "size", "empty", "front"};
    queue<int> que;
    string s; int a;

    for(int i=0; i<n; i++)
    {
        cin >>s;
        if(s == vec[0]) // push
        {
            cin >> a;
            que.push(a);
        } 
        else if(s==vec[1]) // pop
        {
            cout << que.front() << endl;
            que.pop();
        }
        else if(s==vec[2]) // size
        {
            cout << que.size() << endl;
        }
        else if(s==vec[3]) // empty
        {
            cout <<que.empty() <<endl;
        }
        else if(s==vec[4]) // front
        {
            cout <<que.front() << endl;
        }
    }
    return 0;
}