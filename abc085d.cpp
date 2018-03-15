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

pair<int ,int> ab[100001], ab2[100001];
int h, n;
struct ka{
    int a,b,n;
};
int main(){
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        cin >> ab[i].first >> ab[i].second;
        ab2[i] = ab[i];
    }

    sort(ab, ab+n);
    sort(ab2, ab2+n, SecondCompare);
    int ans = 0;
    int thrownum = n-1;
    while(h > 0){
        if(thrownum >= 0 && ab[n-1].first < ab2[thrownum].second){
            h -= ab2[thrownum].second;
            thrownum--;
        }
        else{
            if(h % ab[n-1].first == 0)  ans += h/ab[n-1].first;
            else    ans += h/ab[n-1].first + 1;
            break;
        }
        ++ans;
    }
    cout << ans << endl;

}