#include "testlib.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate(int n, int q, int m, int cost) {
    cout << n << "\n";

    for (int i = 0; i < n; ++i) {
        int qualification = rnd.next(0, q);
        cout << qualification << " ";
    }
    cout << "\n";
    cout << m << "\n";

    for (int i = 0; i < m; ++i) {
        int ai = rnd.next(1, n);
        int bi = rnd.next(1, n);
        int ans = rnd.next(0, cost);
        cout << ai << " " << bi << " " << ans << "\n";
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(1, 1000);  
    int q= 1e6; 
    int m = rnd.next(0, 10000); 
    int cost = 1e6;          

    generate(n, q, m, cost);

    return 0;
}
