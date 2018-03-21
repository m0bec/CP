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

vector<pair<int,int>> vec(100000);
int main(){
    long long n,k,a,b;
    pair<int,int> p;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p.first = a;
        p.second = b;
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end());
    long long ans = 0, num = -1;
    do{
        ++num;
        ans += vec[num].second;
    }while(ans < k);
    cout << vec[num].first << endl;
}