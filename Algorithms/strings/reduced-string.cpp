#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    cin >> s;

    for (int i = 1 ; i < s.length() ; i++) {
      if (s.at(i) == s.at(i - 1)) {
        s.erase(i - 1, 2);
        i = 0;
      }
    }

    if (!s.length())
      cout << "Empty String" << endl;
    else
      cout << s << endl;
    return 0;
}
