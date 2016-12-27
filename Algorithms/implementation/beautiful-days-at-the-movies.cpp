#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isBeautiful(int num, int k);
int reverse(int num);

int main() {
    int i, j, k;

    cin >> i >> j >> k;
    int count = 0;

    for (int index = i ; index <= j ; index++) {
        if (isBeautiful(index, k)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

int isBeautiful(int num, int k) {
  int rev = reverse(num);

  if ((abs(num - rev) % k) == 0) {
    return 1;
  }

  return 0;
}

int reverse(int num) {
  int ans = 0;
  int remainder = 0;
  while (num != 0) {
    remainder = num % 10;
    ans = ans * 10 + remainder;
    num/= 10;
  }
  return ans;
}
