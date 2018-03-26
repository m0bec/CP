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
long long a[200000], b[200000];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int c = 0, memc = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            ++c;
        }
        else{
            if(c != 0){
                for(int j = 0; j < c; j++){
                    a[i-j] = 268435456 + 1;
                    memc += c;
                    c = 0;
                }
            }
        }
    }
    if(c != 0){
                for(int j = 0; j < c; j++){
                    a[i-j] = 268435456 + 1;
                    memc += c;
                    c = 0;
                }
            }
    sort(a, a+n);
    int memb = 0
    for(int i = 0; i < n-1; i++){
        if(b[i] == b[i+1]){
            ++c;
        }
        else{
            if(c != 0){
                for(int j = 0; j < c; j++){
                    a[i-j] = 268435456 + 1;
                    memb += c;
                    c = 0;
                }
            }
        }
    }
    if(c != 0){
                for(int j = 0; j < c; j++){
                    a[i-j] = 268435456 + 1;
                    memb += c;
                    c = 0;
                }
            }
    sort(b, b+n);
}