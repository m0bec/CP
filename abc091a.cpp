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

int a,b,c;

int main(){
    cin >> a >> b >> c;
    if(a+b-c >= 0) cout << "Yes\n";
    else    cout << "No\n";
}