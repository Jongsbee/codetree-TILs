#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.


    class Student
    {
        public :
            string name;
            int tall;
            int weight;

            Student(string name, int tall, int weight)
            {
                this -> name = name;
                this -> tall = tall;
                this -> weight = weight;
            }

            Student(){}
            
        bool operator < (Student &student)
        {
            return this -> tall < student.tall;
        }
    };

    // bool compare(Student a, Student b)
    // {
    //     return a.tall < b.tall;
    // }


    int n;
    cin >> n;
    vector<Student> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i].name >> vec[i].tall >> vec[i].weight;
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++)
    {
        cout << vec[i].name << " " << vec[i].tall << " " <<vec[i].weight << endl;
    }


    return 0;
}