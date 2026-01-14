#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = -1;

    for (const string& secName : seoul) {
        count++;

        if (secName == "Kim") {
            answer += "김서방은 ";
            answer += to_string(count);
            answer += "에 있다";
            break;
        }
    }
    return answer;
}