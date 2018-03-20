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

int ans, n;
int s[100];
bool flag = false;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] % 10 != 0)  flag = true;
    }
    sort(s,s+n);
    for(int i = 0; i < n; i++){
        ans += s[i];
    }
    if(!flag){
        cout << "0\n";
        return 0;
    }
    int cou = 0;
    if(ans % 10 != 0){
        cout << ans << endl;
        return 0;
    }
    while((ans - s[cou]) % 10 == 0)++cou;
    ans -= s[cou];
    cout << ans << endl;
}