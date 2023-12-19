#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Student
{
    public :
        string name;
        int kor, eng, math;

        Student(string name, int kor, int eng, int math)
        {
            this -> name = name;
            this -> kor = kor;
            this -> eng = eng;
            this -> math = math;
        }

        Student(){}

};
bool compare(Student a, Student b);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<Student> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i].name >> vec[i].kor >> vec[i].eng >> vec[i].math;
    }

    sort(vec.begin(), vec.end(), compare);

    for(int i=0; i<n; i++)
    {
        cout << vec[i].name << " " << vec[i].kor << " " << vec[i].eng << " " << vec[i].math << endl;
    }


    return 0;
}



bool compare(Student a, Student b)
{
    if(a.kor == b.kor)
    {
        if(a.eng == b.eng)
        {
            return a.math > b.math;
        }
        else 
        {
            return a.eng > b.eng;
        }
    }
    else return a.kor > b.kor;
}