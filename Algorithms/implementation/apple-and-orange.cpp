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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int appleMax = t - a;
    int appleMin = s - a;
    int orangeMax = b - s;
    int orangeMin = b - t;
    int oranges = 0;
    int apples = 0;

    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
       if (apple[apple_i] >= 0) {
         int dis = apple[apple_i];
         if (dis >= appleMin && dis <= appleMax) {
           apples++;
         }
       }
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
       if (orange[orange_i] <= 0) {
         int dis = 0 - orange[orange_i];
         if (dis >= orangeMin && dis <= orangeMax) {
           oranges++;
         }
       }
    }

    cout << apples << "\n" << oranges << "\n";

    return 0;
}
