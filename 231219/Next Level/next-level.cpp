#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    class User
    {
        public :
            string id;
            int level;    

            User(string id, int level)
            {
                this -> id = id;
                this -> level = level;
            }
    };

    string id;
    int level;
    
    cin >> id >> level;

    User user1 = User(id,level);
    User user2 = User(id,level);

    user1.id = "codetree";
    user1.level = 10;

    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level << endl;
    

    return 0;
}