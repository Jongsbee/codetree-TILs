#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<string> orders
    = {"push_front", "push_back", "pop_front", "pop_back"
    , "size", "empty", "front", "back"};
    deque<int> deq;

    int n;
    cin >> n;
    string s; int a;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s == orders[0]) // push_front
        {
            cin >> a;
            deq.push_front(a);
        }
        else if(s==orders[1]) // push_back
        {
            cin >> a;
            deq.push_back(a);
        }
        else if(s==orders[2]) // pop_front
        {
            cout << deq.front() << endl;
            deq.pop_front();   
        }
        else if(s==orders[3]) // pop_back
        {
            cout << deq.back() << endl;
            deq.pop_back();
        }
        else if(s==orders[4]) // size
        {
            cout <<deq.size() << endl;
        }
        else if(s==orders[5]) // empty
        {
            cout << deq.empty() << endl;
        }
        else if(s==orders[6]) // front
        {
            cout << deq.front() << endl;
        }
        else if(s==orders[7]) //back
        {
            cout << deq.back() << endl;
        }
    }
    return 0;
}