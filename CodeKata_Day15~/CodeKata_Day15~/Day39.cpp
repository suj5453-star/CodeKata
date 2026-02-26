#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int bignum;
    int GCD;
    int LCM;

    if (n >= m) { bignum = n; }
    else { bignum = m; }

    for (int i = 1; i < bignum; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            GCD = i;
        }
    }
    answer.push_back(GCD);

    // n * m = temp * 최소공배수
    if (GCD != 0)
    {
        LCM = (m * n) / GCD;
    }
    answer.push_back(LCM);

    return answer;
}