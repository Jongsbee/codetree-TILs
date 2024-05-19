#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; cin.ignore();
    string s; int num;
    vector<int> vec;
    for(int tc = 0; tc<n; tc++)
    {
        cin >> s;
        if(s == "push_back")
        {
            cin >> num;
            vec.emplace_back(num);
        }
        else if(s == "push_front")
        {
            cin >>num;
            vec.insert(vec.begin(), num);
        }
        else if(s == "pop_front")
        {
            cout << vec[0] << "\n";
            vec.erase(vec.begin());
        }
        else if(s == "pop_back")
        {
            cout << vec[vec.size()-1] << endl;
            vec.erase(vec.end()-1);
        }
        else if(s == "empty")
        {
            cout <<  vec.empty() << "\n";
        }
        else if(s == "size")
        {
            cout << vec.size() << "\n";
        }
        else if(s == "front")
        {
            cout << vec[0] << "\n";
        }
        else if(s == "back")
        {
            cout << vec[vec.size()-1] << "\n";
        }
    }
    
    return 0;
}