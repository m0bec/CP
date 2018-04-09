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
 
int q;
ll a,b, des;

int main(){
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        if(a + b <= 2){
            cout << "0\n";
        }
        else{
            ll are = sqrt(a*b-1);

            ll are2 = are*2;
            if((a*b-1)/are == are){
                are2--;
            }
            if(a == b){
                if(a <= are && b <= are) are2--;
            }
            else{
                if(a <= are) are2--;
            if(b <= are) are2--;
            }
            
            printf("%lld\n", are2);
        }
    }
}