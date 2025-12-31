#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {

    vector<long long> answer;

    for (int i = 0; i < n; i++) {

        if (x == 0) {
            answer.push_back(0);
        }
        else {
            answer.push_back(x + (x * i));
        }
    }
    return answer;
}