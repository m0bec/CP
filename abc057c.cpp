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

long long n;
long long ans = LLONG_MAX, mem;
int main(){
    cin >> n;
    for(long long i = 1; i*i <= n; i++){
        if(n % i == 0){
            mem = max(i, n/i);
            ans = min(ans, mem);
        }
    }

    int cou = 0;
    while(ans > 0){
        ans /= 10;
        ++cou;
    }
    cout << cou << endl;
}
