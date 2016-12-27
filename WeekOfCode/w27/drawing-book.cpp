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
    int n;
    cin >> n;
    int p;
    cin >> p;
    int countLeft = 0;
    int countRight = 0;
    // your code goes here
    if (n % 2) {
      // Odd
      n--;
    }
    int i = n - p;
    while (i > 0) {
      countRight++;
      i -= 2;
    }

    i = p - 2;
    while (i >= 0) {
      countLeft++;
      i -= 2;
    }

    if (countLeft > countRight)
      cout << countRight;
    else
      cout << countLeft;

    return 0;
}
