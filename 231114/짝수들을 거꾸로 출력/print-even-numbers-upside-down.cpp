#include <iostream>
#include <stack>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    stack<int> s;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin >> a;
        if(a%2 == 0) s.push(a); 
    }
    
    while(s.size() > 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}