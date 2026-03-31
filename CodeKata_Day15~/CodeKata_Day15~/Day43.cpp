#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long pNum = stoll(p);
    int tLen = t.size();

    for (int i = 0; i <= tLen - p.size(); i++)
    {
        string temp = t.substr(i, p.size());
        long long tempNum = stoll(temp);

        if (tempNum <= pNum)
            answer++;
    }

    return answer;
}