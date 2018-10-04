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
 
int n;
ll x[1000],y[1000];

int m = 40;
ll d[40];
int posx,posy,mcount;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    d[0] = 2;
    for(int i = 1; i < m; i++){
        d[i] = 1;
    }

    for(int i = 0; i < n; i++){
        posx = posy = 0;
        mcount = m;
        if(int(abs(x[i]))%2 == int(abs(y[i]))%2){
            cout << "RLL";
            mcount -= 3;
        }
        else{
            if(int(abs(x[i]))%2 == 1){
                if(x[i] < 0) posx -= 2;
                else    posx += 2;
            }
            else{
                if(y[i] < 0) posy -= 2;
                else    posy += 2;
            }
        }
        for(int j = mcount; j > 0; j--){

        }
    }

}