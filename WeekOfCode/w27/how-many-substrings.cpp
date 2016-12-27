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

int lcp(string s1, string s2);
int main(){
    int n;
    int q;
    int lcpSum = 0;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int a0 = 0; a0 < q; a0++){
        int left;
        int right;
        cin >> left >> right;
        // your code goes here
        string str = s.substr(left, right);
        cout << str << endl;
        vector<string> suffixes(str.length());
        for (int i = 0 ; i < str.length() ; i++) {
          suffixes[i] = str.substr(i, str.length());

        }

        sort(suffixes.begin(), suffixes.end());
        for (int i = 0 ; i < str.length() ; i++) {
          cout << suffixes[i] << " ";

        }
        cout << endl;
        lcpSum = (suffixes[0]).length();
        for (int i = 0 ; i < str.length() - 1 ; i++) {
          lcpSum += lcp(suffixes[i], suffixes[i + 1]);
        }

        cout << lcpSum << endl;

    }
    return 0;
}

int lcp(string s1, string s2) {
  int sum = 0;
  int n = s1.length() > s2.length() ? s2.length() : s1.length();
  int i = 0;

  while (i < n && (s1.at(i) == s2.at(i))) {
    sum++;
    i++;
  }

  return sum;
}
