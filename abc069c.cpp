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

int n;
int a[100000];

int main(){
    cin >> n;
    int cou2 = 0, cou4 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)   cou2++;
        if(a[i] % 4 == 0)   cou4++;
    }

    cou2 = cou2 - cou4;
    n -= cou2;
    if(cou2 != 0)   n++;

    if(cou4 + 1 >= n - cou4)   cout << "Yes\n";
    else cout << "No\n";
}