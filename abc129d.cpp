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

const int SIZE = 2000+10;
ll h, w;
string s[SIZE];
ll mem[SIZE][SIZE];


int main(){
    cin >> h >> w;
    for(int i = 0; i < h; i++){
        cin >> s[i];
    }

    ll st, cou = 0;
    for(int i = 0; i < h; i++){
        cou = 0;
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#'){
                if(cou != 0){
                    for(int k = st; k < j; k++){
                        mem[i][k] += cou;
                    }
                }
                cou = 0;
                continue;
            }
            else{
                if(cou == 0)    st = j;
                ++cou;
            }
        }
        if(cou != 0){
            for(int k = st; k < w; k++){
                mem[i][k] += cou;
            }
        }
    }

    for(int i = 0; i < w; i++){
        cou = 0;
        for(int j = 0; j < h; j++){
            if(s[j][i] == '#'){
                if(cou != 0){
                    for(int k = st; k < j; k++){
                        mem[k][i] += cou;
                    //    cout << k << ' ' << i << ' ' << cou << endl;
                    }
                }
                cou = 0;
                continue;
            }
            else{
                if(cou == 0)    st = j;
                ++cou;
            }
        }
        if(cou != 0){
            for(int k = st; k < h; k++){
                mem[k][i] += cou;
                //cout << k << ' ' << i << ' ' << cou << endl;
            }
        }
        cou = 0;
    }

    ll ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            --mem[i][j];
           // cout << mem[i][j] << ' ';
            if(ans < mem[i][j])    ans = mem[i][j];
        }
       // cout << endl;
    }

    cout << ans << endl;
}