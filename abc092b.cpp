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
 
int n, d, x;
int a[101];

int main(){
    cin >> n >> d >> x;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        x += (d-1)/a[i] + 1;
    }

    cout << x << endl;
}