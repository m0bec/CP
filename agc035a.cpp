#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

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

ll minll(ll a, ll b){
    if(a >= b)  return b;
    else    return a;
}

ll maxll(ll a, ll b){
    if(a >= b)  return a;
    else    return b;
}

void Yes(){
    cout << "Yes\n";
    exit(0);
}

void No(){
    cout << "No\n";
    exit(0);
}

const int SIZE = 1e5+100;
ll n;
ll a[SIZE],cou2[3];

int main(){
    cin >> n;
    ll cou[3];
    bool f;
    for(int i = 0; i < 3; i++)cou[i] = -1;

    for(int i = 0; i < n; i++){
        f = false;
        cin >> a[i];
        for(int j = 0; j < 3; j++){
            if(cou[j] == -1){
                cou[j] = a[i];
                cou2[j]++;
                f = true;
                break;
            }
            else{
                if(cou[j] == a[i]){
                    cou2[j]++;
                    f = true;
                    break;
                }
            }
        }
        if(!f){
            No();
        }
    }
 
    if(cou[1] == -1){
        if(cou[0] == 0) Yes();
        else
        {
            No();
        }
    }
        


    for(int i = 0; i < 3; i++){
        if(cou[i] == -1){
                if(cou[0] == 0){
                    if(cou2[0]*2 == cou2[1]){
                        Yes();
                    }
                    else{
                        No();
                    }
                }
                else if(cou[1] == 0){
                    if(cou2[1]*2 == cou2[0]){
                        Yes();
                    }
                    else{
                        No();
                    }                    
                }
                else{
                    No();
                }
            }
    }


    if(cou2[0] == cou2[1] && cou2[1] == cou2[2]){
        /* 
        for(int i = 0; i < 3; i++){
            int j,k,l;
            j = i;
            k = i+1;
            l = i+2;
            if(k >= 3)  k-= 3;
            if(l >= 3) l -= 3;
            ll tmp = (cou[j]^cou[k]);
            if(tmp != cou[l]) No();
        }
        Yes();
        */
        if((cou[0]^cou[1]) == cou[2] && (cou[2]^cou[0]) == cou[1] && (cou[1]^cou[2]) == cou[0]){
            Yes();
        }
        else{
            No();
        }
    }
    else{
        No();
    }
}