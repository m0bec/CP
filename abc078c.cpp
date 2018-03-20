#include <bits/stdc++.h>
using namespace std;

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}

bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}

int n, m;

int main(){
    cin >> n >> m;
    int ans = 1;
    for(int i = 0; i < m; i++) {
        ans *= 2;
    }
    cout << (m*1900 + (n-m)*100)* ans * 1LL<< endl;
}