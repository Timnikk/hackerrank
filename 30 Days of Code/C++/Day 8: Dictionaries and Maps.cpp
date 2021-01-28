#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map <string,long> pbook;
    for (int i=0;i<n;i++)
    {
        string name; int num;
        cin >> name;
        cin >> num;
        pbook[name] = num;
    }
    string name;
    while(cin>>name) 
    {
        if (pbook.find(name)!=pbook.end())
            cout<<name<<"="<<pbook.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
