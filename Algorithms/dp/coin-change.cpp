#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count(vector<int64_t> S, int m, int n);
int main() {
    int n, m;

    cin >> n >> m;

    vector<int64_t> vec(m);

    for (int i = 0 ; i < m ; i++) {
      cin >> vec[i];
    }

    cout << count(vec, m, n);

    return 0;
}

int count(vector<int64_t> S, int m, int n )
{
    int64_t i, j, x, y;

    int64_t table[n+1][m];

    for (i=0; i<m; i++)
        if(i%S[0] == 0) table[0][i] = 1; else table[0][i] = 0;


    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;

            y = (j >= 1)? table[i][j-1]: 0;

            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}
