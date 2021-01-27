#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set <int> v;

int main() {
    int q; cin >> q;
    for(int i = 1;i<=q;++i) {
        int k; cin >> k;
        if(k==1) {
            int m; cin >> m;
            v.insert(m);
        }
        else if(k==2) {
            int m; cin >> m;
            set<int>::iterator val = v.find(m);
            if(val != v.end()) {
                v.erase(m);
            }
            else {}
        }
        else if(k==3) {
            int m; cin >> m;
            set<int>::iterator val = v.find(m);
            if(val != v.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }  
        }
    }

    return 0;
}
