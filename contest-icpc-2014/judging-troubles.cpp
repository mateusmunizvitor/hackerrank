#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    map<string, int> map1;
    map<string, int> map2;
    map1["c"] = 0;
    map1["w"] = 0;
    map1["t"] = 0;
    map2["c"] = 0;
    map2["w"] = 0;
    map2["t"] = 0;
    
    
    int n;
    cin >> n;
    
    for (int i = 0 ; i < n ; i++) {
        string str;
        getline(cin, str);
        
        if (str.compare("correct") == 0) {
            map1["c"]++;
        }else if (str.compare("wronganswer") == 0) {
            map1["w"]++;
        }else if (str.compare("timelimit") == 0) {
            map1["t"]++;
        }
    }
    
    for (int i = 0 ; i < n ; i++) {
        string str;
        getline(cin, str);
        
        if (str.compare("correct") == 0) {
            map2["c"]++;
        }else if (str.compare("wronganswer") == 0) {
            map2["w"]++;
        }else if (str.compare("timelimit") == 0) {
            map2["t"]++;
        }
    }
    
    int val1 = abs(map2["c"] - map1["c"]);
    int val2 = abs(map2["w"] - map1["w"]);
    int val3 = abs(map2["t"] - map1["t"]);
    
    cout << val1 + val2 + val3 << endl;
    return 0;
}