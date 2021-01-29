#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

map <string, int> students;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q; cin >> q;
    for(int i(0), mark;i<q;++i) {
        int n; cin >> n;
        string name; cin >> name;
        if(n==1) {
            int score; cin >> score;
            students[name] += score;
        }
        else if(n==2) {
            students.erase(name);
        }
        else if(n==3) {
            cout << students[name] << endl;
        }
    }
    return 0;
}
