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
 
long long a[2010], z, w, lmax, lmin, rmax, rmin, ans, mem;
long long s[2010];
int n;

int main(){
    cin >> n >> z >> w;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    if(n==1)    cout << abs(s[0]-w) << endl;
    else{
        if(abs(s[n-1]-w) > abs(s[n-2]-s[n-1]))  ans = abs(s[n-1]-w);
        else{
            ans = abs(s[n-2]-s[n-1]);
        }
        cout << ans << endl;
    }

}