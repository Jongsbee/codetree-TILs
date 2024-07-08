#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    stack<char> answer;
    bool answerIs = true;
    for(const auto&c : s)
    {
        if(c == '(')
        {
            answer.push(1);
        }
        else
        {
            if(answer.empty())
            {
            
                answerIs = false;
                break;
            }
            else answer.pop();
        }
    }
    if(answerIs && answer.empty()) cout << "Yes" << endl;
    else cout <<"No" << endl;
    return 0;
}