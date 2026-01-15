#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (const int& Num : arr) {
        if (Num % divisor == 0) {
            answer.push_back(Num);
        }
    }

    if (answer.size() == 0) { answer.push_back(-1); }

    sort(answer.begin(), answer.end(), [](int a, int b) {return a < b; });

    return answer;
}