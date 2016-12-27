#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int n;
    long int p;
    long int sum = 0;
    cin >> n >> p;
    vector<long int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    sort(a.begin(), a.end());

    int lastNumber = -1;
    int lastNumberCount = 0;
    for (int i = 0 ; i < n ; i++) {
      int buttons = a[i] / p;
      if (a[i] % p) {
        buttons++;
      }

      if (buttons == lastNumber) {
        lastNumberCount++;
        buttons += lastNumberCount;

      }else {
        lastNumber = buttons;
        lastNumberCount = 0;
      }

      sum += buttons;
    }




    cout << sum << "\n";

    return 0;
}
