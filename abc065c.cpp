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

long long n,m;

int main(){
    cin >> n >> m;
    if(abs(n-m) >= 2){
        cout << "0\n";
        return 0;
    }

    long long ans = 1;
    for(int i = n; i > 0; i--){
        ans *= i;
        ans %= 1000000007;
    }
    long long ans2 = 1;
    for(int i = m; i > 0; i--){
        ans2 *= i;
        ans2 %= 1000000007;
    }
    if(n == m){
        cout << (ans2 * ans * 2) % 1000000007 << endl;
    }
    else{
        cout << (ans2 * ans) % 1000000007 << endl;
    }
}