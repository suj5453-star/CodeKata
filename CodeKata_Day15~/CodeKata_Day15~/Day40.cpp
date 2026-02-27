#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;

    int quotient = n;
    int remainder = 0;
    for (int i = 0; i < n; i++)
    {
        if (quotient == 0)
            break;

        remainder = n % 3;
        quotient = n / 3;

        vec.push_back(remainder);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        answer += vec[i] * pow(3, i);
    }

    return answer;
}