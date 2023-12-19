#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    class Person
    {
        public :
            string name, postCode, region;

            Person(string name, string postCode, string region)
            {
                this -> name = name;
                this -> postCode = postCode;
                this -> region = region;
            }

            Person(){}
        
        bool operator < (Person &person)
        {
            return this -> name < person.name;
        }
    };

    int n;
    cin >> n;
    vector<Person> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i].name >> vec[i].postCode >> vec[i].region;
    }

    sort(vec.begin(), vec.end());

    cout << "name " << vec[n-1].name << endl;
    cout << "addr " << vec[n-1].postCode << endl;
    cout << "city " << vec[n-1].region << endl;
    
    return 0;
}