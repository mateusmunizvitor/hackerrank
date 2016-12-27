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
    int n = 26;
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;

    int maxHeight = -1;

    for (int i = 0 ; i < word.length(); i++) {
      int val = word.at(i) - 97;
      int currHeight = h[val];
      if (currHeight > maxHeight)
        maxHeight = currHeight;
    }

    int area = word.length() * maxHeight;
    cout << area << "\n";

    return 0;
}
