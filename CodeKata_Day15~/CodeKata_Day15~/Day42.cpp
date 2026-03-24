#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;

    // 양 0 음 / 번호 중복 가능 / 길이 제한 있음
    for (int i = 0; i < number.size(); i++)
    {
        int sum = 0;
        sum += number[i];

        for (int j = i + 1; j < number.size(); j++)
        {
            sum = number[i] + number[j];

            for (int k = j + 1; k < number.size(); k++)
            {
                sum = number[i] + number[j] + number[k];
                if (sum == 0) { answer++; }
            }
        }
    }

    return answer;
}
