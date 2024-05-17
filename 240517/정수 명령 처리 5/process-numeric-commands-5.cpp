#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n; cin >> n; cin.ignore();

    string s;
    int a;
    vector<int> vec;

    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s == "push_back")
        {
            cin >> a;
            vec.emplace_back(a);
        }
        else if(s == "get")
        {
            cin >> a;

            cout << vec[a-1] << endl;
        }
        else if(s == "size")
        {
            cout << vec.size() << endl;
        }
        else if(s == "pop_back")
        {
            vec.pop_back();
        }
    }
    return 0;
}