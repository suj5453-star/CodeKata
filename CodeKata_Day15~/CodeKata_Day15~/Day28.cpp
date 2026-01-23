#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int minTemp = arr[0];
    int minNumIndex = 0;

    if (answer.size() == 1) { answer[0] = -1; }
    else if (answer.size() > 1)
    {
        for (int i = 1; i < answer.size(); i++)
        {
            if (minTemp > answer[i]) 
            {
                minTemp = answer[i];
                minNumIndex = i;
            }
        }
        answer.erase(answer.begin() + minNumIndex);
    }
    return answer;
}