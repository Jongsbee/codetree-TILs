#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
    public : 
        string name; int tall; float weight;

        Student(string name, int tall, float weight)
        {
            this -> name = name;
            this -> tall = tall;
            this -> weight = weight;
        }

        Student(){};
};

bool compareName    (Student a, Student b);
bool compareHeight  (Student a, Student b);


int main() {
    
    vector<Student> vec(5);

    for(int i=0; i<5; i++)
    {
        cin >> vec[i].name >> vec[i].tall >> vec[i].weight;
    }

    // 1. 이름순으로 정렬

    sort(vec.begin(), vec.end(), compareName);
    cout << "name" << endl;
    for(int i=0; i<5; i++)
    {
        cout << vec[i].name << " " << vec[i].tall << " " << vec[i].weight << endl;
    }

    cout << endl;

    // 2. 키순으로 정렬
    sort(vec.begin(), vec.end(), compareHeight);
    cout << "height" << endl;
    for(int i=0; i<5; i++)
    {
        cout << vec[i].name << " " << vec[i].tall << " " << vec[i].weight << endl;
    }


    return 0;
}

bool compareName(Student a, Student b)
{
    return a.name < b.name;
}

bool compareHeight(Student a, Student b)
{
    return a.tall > b.tall;
}