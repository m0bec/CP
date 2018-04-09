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
 
int n, a, b,c;
string s;

int main(){
    cin >> a >> b >> c;
    int ma = max(a,b);
    ma = max(ma, c);
    int des[3];
    des[0] = ma-a;
    des[1] = ma-b;
    des[2] = ma-c;
    sort(des, des+3);
    int kig = 0;
    kig += des[1]%2;
    kig += des[2] % 2;
    int ans;
    if(kig == 2){
        ans++;
        ans += (des[1]-1)/2;
        ans += (des[2]-1)/2;
    }
    else if(kig == 1){
        if(des[1] % 2 == 0){
            ans += des[1]/2;
        }
        else{
            ans += des[1]/2+1;
        }

        if(des[2]%2 == 0)   ans += des[2] /2;
        else    ans += des[2]/2+1;
        ans++;
    }
    else{
        ans += des[2]/2;
        ans += des[1]/2;
    }
    cout << ans << endl;
}