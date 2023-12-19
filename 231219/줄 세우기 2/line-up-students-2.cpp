#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
    public : 
        int height, weight, index;

        Student(){};

        bool operator < (Student &s)
        {
            if(this -> height == s.height)
            {
                return this -> weight > s.weight;
            }
            else return this -> height < s.height;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    vector<Student> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i].height >> vec[i].weight;
        vec[i].index = i+1;
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++)
    {
        cout << vec[i].height << " " << vec[i].weight << " " << vec[i].index << endl;
    }


    return 0;
}