#include "header.h"

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<item> it(N);
    for (int i=0; i< N; i++)
        cin >> it[i].value >> it[i].weight;

    int max_value=knapsack (it, K);
    cout << max_value;
    return 0;
}
