#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int cnt = 0, sum = 0;
    while(n){
        if(n%2==1){
            ++cnt;
            if(cnt > sum) {
                sum = cnt;
            }
        }
        else{
            cnt = 0;
        }
        n /= 2;
    }
    cout << sum;

    return 0;
}
