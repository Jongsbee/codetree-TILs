#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {

    vector<string> vec = {"push", "size", "empty", "pop", "top"};
    stack<int> answer;
    int n;
    cin >> n;
    string s; int a;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s == vec[0]) // push
        {
            cin >> a;
            answer.push(a);
            
        }
        else if(s==vec[1]) // size
        {
            cout<< answer.size() << endl;
        }
        else if(s==vec[2]) // empty
        {
            cout << answer.empty() << endl;
        }
        else if(s==vec[3]) // pop
        {
            cout << answer.top() << endl;
            answer.pop();
            
        }
        else if(s==vec[4]) // top
        {
            cout << answer.top() << endl;
        }
        
        
    }
    return 0;
}