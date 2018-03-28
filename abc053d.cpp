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
int a[100001];
int c;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a, a+n);

    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1])   ++c;
    }
    if(c%2 != 0)    ++c;
    cout << n-c << endl;
}