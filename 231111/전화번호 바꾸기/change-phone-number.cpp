#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
int main() {

    string number;
    cin >> number;

    string word;


    stringstream ss(number);
    vector<string> v;
    while(getline(ss,word,'-'))
    {
        v.emplace_back(word);
    }
    
    cout << v[0] << "-" << v[2] << "-" << v[1] << endl;



    return 0;
}