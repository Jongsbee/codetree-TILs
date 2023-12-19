#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    class Agent
    {
        public :
            char codeName;
            int score;

            Agent(char codeName, int score)
            {
                this -> codeName = codeName;
                this -> score = score;
            }

            Agent(){}

    bool operator < (Agent &agent)
    {
        return this -> score < agent.score;
    }

    };

    vector<Agent> vec(5);

    for(int i=0; i<5; i++)
    {
        
        cin >> vec[i].codeName >> vec[i].score;
    }



    sort(vec.begin(), vec.end());

    cout << vec[0].codeName << " " << vec[0].score << endl;

    
    return 0;
}