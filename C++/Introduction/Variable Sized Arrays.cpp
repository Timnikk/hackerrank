#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int v[10001][10001];

int main() {
    int n,q;
    cin >> n>> q;
    int** seq = new int* [n];
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        int* b=new int [a];
        for(int j=0;j<a;j++) {
            int e;
            cin>>e;
            b[j]=e;
        }
        *(seq+i)=b;
    }
    for(int i=0;i<q;i++) {
    int r,s;
    cin >> r >> s;
    cout << seq[r][s] << endl;
    }
    return 0;
}
