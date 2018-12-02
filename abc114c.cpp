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
 
string s;
ll n;
int a[11];
ll ans;


int ar[3] = {3,5,7};
void calc(ll num, int f1, int f2, int f3){
    int nn;
    string st;
    for(int i = 0; i < 3; i++){
        nn = num*10+ar[i];
        if(i == 0)  f1++;
        else if(i == 1) f2++;
        else   f3++;

        st = to_string(nn);
        if(st.length() > 9) return;

        if(f1 != 0 && f2 != 0 && f3 != 0){
            if(nn <= n){
                ++ans;
            //  cout << nn << endl;
                calc(nn,f1,f2,f3);
            }
        }
        else{
            calc(nn,f1,f2,f3);
        }
        if(i == 0)  f1--;
        else if(i == 1) f2--;
        else   f3--;
    }
    return;
}

int main(){
    cin >> n;
    int f1=0,f2=0,f3=0;
    calc(3,1,0,0);
    calc(5,0,1,0);
    calc(7,0,0,1);

    cout << ans << endl;
}