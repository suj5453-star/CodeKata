#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;

    int quotient = n;
    int remainder = 0;
    for (int i = 0; quotient != 0; i++)
    {
        if (quotient == 0)
            break;

        remainder = quotient % 3;
        quotient /= 3;

        vec.push_back(remainder);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        answer += vec[i] * pow(3, vec.size() - (i + 1));
    }

    return answer;
}