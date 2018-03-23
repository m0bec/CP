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
 
int n, ch, s,t,c;
int a[32][100001], ans[100001];
int main(){
    cin >> n >> ch;
    for(int i = 0; i < n; i++){
        cin >> s >> t >> c;
        a[c-1][s]++;
        a[c-1][t]--;
    }

    for(int i = 0; i < ch; i++){
        for(int j = 1; j < 100001; j++){
            if(a[i][j] == 1)    ans[j-1]++;
            else if(a[i][j] == -1)  ans[j]--;
        }
    }

    int ma = 0, cou = 0;
    for(int i = 0; i < 100001; i++){
        cou += ans[i];
        ma = max(ma, cou);
    }
    cout << ma << endl;
}