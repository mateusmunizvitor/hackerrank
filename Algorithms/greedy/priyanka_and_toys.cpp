#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i, total = 0;
    cin >> N;
    
    int vet[10000];
    
    for (i = 0 ; i < N ; i++) {
        cin >> vet[i];
    }
    
    sort(begin(vet), end(vet));
    
    i = 0;
    
    while (i <= N - 1) {
        int val = vet[i];
        total++;
        
        while (vet[i] <= val + 4 && i <= N - 1) {
            i++;
        }
        i++;
    }
    
    cout << total << endl;
    
    return 0;
}