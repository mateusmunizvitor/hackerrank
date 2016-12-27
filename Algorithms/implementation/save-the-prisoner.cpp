#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long int n, m, s;

    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        cin >> n >> m >> s;

        // Adjust first round
       if (int val = ((s + m - 1) % n)) {
           cout << val << endl;
       }else {
           cout << n << endl;
       }
    }

    return 0;
}
