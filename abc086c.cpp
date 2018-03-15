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
int x[100000], t[100000], y[100000];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    for(int i = 0; i < n; i++){
        if(t[i] >= abs(x[i]+y[i]) && t[i] % 2 == (x[i]+y[i]) % 2){
            continue;
        }
        else{
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}