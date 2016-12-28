#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

typedef map<int,int> mii;
typedef pair<int,int> pii;
int main() {
    mii dict;
    int n;
    cin >> n;
    int max = 0;


    for (int i = 0 ; i < n ; i++) {
        int num;
        cin >> num;
        try {
            int val = dict.at(num);
            val++;
            dict.erase(num);
            dict.insert(pii(num, val));
            if(val > max) {
                max = val;
            }
        }catch(const out_of_range e) {
            dict.insert(pii(num, 1));
        }
    }
    if (!max) {
        max++;
    }
    cout << n - max << endl;
    return 0;
}
