#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int , int> P;
typedef pair<ll, ll> PL;
const int INT_INF = 2147483646;
const ll LL_INF = 9223372036854775807;
 
bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
 
ll n;
const ll SIZE = 1e5+10;
PL a[SIZE],b[SIZE];
ll a1[SIZE],b1[SIZE];
int mem[SIZE];
ll ans1,ans2;
ll suma,sumb;
 
int selecta(int &po, int aa){
    while(true){
        if(mem[a[po].second] == 0)    break;
        --po;
    }
    if(aa == 1) mem[a[po].second] = 1;
    int mm = po;
    while(true){
        if(mem[a[po].second] == 0)    break;
        --po;
    }
    return a[mm].first;
}
 
int selectb(int &po, int aa){
    while(true){
        if(mem[b[po].second] == 0)    break;
        --po;
    }
    if(aa == 1) mem[b[po].second] = 1;
    int mm = po;
    while(true){
        if(mem[b[po].second] == 0)    break;
        --po;
    }
    return b[mm].first;
}
 
 
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> b[i].first;
        a[i].second = b[i].second = i;
        a1[i] = a[i].first;
        b1[i] = b[i].first;
    }
    for(int i = 0; i < 2; i++){
        a[n].first = 0;
        b[n].first = 0;
        a[n].second = b[n].second = n;
        a1[n] = b1[n] = 0;
        ++n;
    }
 
    sort(a,a+n);
    sort(b,b+n);
    int posa = n-1,posb = n-1;
    
    for(int i = 0; i < n-2; i++){
        if(i%2 == 0){
            if(a[posa].second == b[posb].second){
                suma += selecta(posa,1);
                continue;
            }

            ll mem1,mem2;
            int memp = posb-1;
            mem1 = a[posa].first-b[posb].first;
            mem2 = a1[b[posb].second] - selectb(memp,2);
            memp = posb-1;
            if(mem1 >= mem2){
                suma += selecta(posa,1);
            }
            else{
                suma += a1[b[posb].second];
                mem[b[posb].second] = 1;
            }
        }
        else{
            if(a[posa].second == b[posb].second){
                sumb += selectb(posa,1);
                continue;
            }

            ll mem1,mem2;
            int memp = posa-1;
            mem1 = b[posb].first-a[posa].first;
            mem2 = b1[a[posa].second] - selecta(memp,2);
            memp = posa-1;
            if(mem1 >= mem2){
                sumb += selectb(posb,1);
            }
            else{
                sumb += b1[a[posa].second];
                mem[a[posa].second] = 1;
            }
        } 
 
    }
 
    cout << suma-sumb << endl;
    
}