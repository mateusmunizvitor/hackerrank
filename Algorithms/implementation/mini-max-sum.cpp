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
  vector<long int> vec(5);
  cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];

  sort(vec.begin(), vec.end());

  long int min = vec[0] + vec[1] + vec[2] + vec[3];
  long int max = vec[1] + vec[2] + vec[3] + vec[4];

  cout << min << " " << max << "\n";

  return 0;
}
