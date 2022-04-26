#include "header.h"

using namespace std;

int knapsack (vector<item>& it, int K)
{
    int N=it.size();
    vector<vector<int>> w(K+1, vector<int>(N+1));

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<K; j++)
        {
            if (it[i].weight<=j+1)
                w[j+1][i+1]=max(w[j+1][i], w[j+1-it[i].weight][i]+it[i].value);
            else
                w[j+1][i+1]=w[j+1][i];
        }
    }
    return w[K][N];
}
