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

ll n,a,b,c,d;
string s;
vector<pair<ll,ll>> ren_dot;

int main(){
    cin >> n >> a >> b >> c >> d;
    cin >> s;
    ll cou = 0,cou_dot = 0,cou_dot_first=0;
    bool f = false;
    ll double_sharp_pos = -1;
    for(int i = a-1; i < max(d,c); i++){
        if(s[i] == '#'){
            ++cou;
            if(cou_dot >= 3){
                pair<ll,ll> tmp;
                tmp.first = cou_dot_first;
                tmp.second = i-1;
                ren_dot.push_back(tmp);
            }
            cou_dot = 0;
        }
        else{
            if(cou_dot == 0)    cou_dot_first = i;
            cou = 0;
            ++cou_dot;
        }
        if(cou >= 2){
            double_sharp_pos = i;
            f = true;
            break;
        }
    }
    if(cou_dot >= 3){
        pair<ll,ll> tmp;
        tmp.first = cou_dot_first;
        tmp.second = n-1;
        ren_dot.push_back(tmp);
    }

    if(f && (double_sharp_pos <= c-1 || double_sharp_pos <= d-1)){
        cout << "No\n";
        return 0;
    }

    bool goal_flag = false;

    if(c < d)   cout << "Yes\n";
    else{
        for(int i = 0; i < ren_dot.size(); i++){
            if(ren_dot[i].first <= d-1 && ren_dot[i].first+1 >= b-1){
                if(ren_dot[i].first <= d-1 && ren_dot[i].second >= d-1){
                    if(ren_dot[i].first == d-1) continue;
                }
                cout << "Yes\n";
                return 0;
            }
        }
        cout << "No\n";
    }
    return 0;
}