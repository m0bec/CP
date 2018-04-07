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
 
int h,w,n;
int a[10000], ans[10000];

int main(){
    cin >> h >> w >> n;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int num = 0, direct = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < a[i]; j++){
                ans[num] = i+1;

                num += direct;
                if(num%w == 0 && direct == 1){
                    direct *= -1;
                    num += w-1;
                }
                else if(num%w == w-1 && direct == -1){
                    num += w+1;
                    direct *= -1;
                }
            }
        }

    num = 0;
    direct = -1;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            printf("%d ", ans[i*w+j]);
        }
        cout << endl;
    }
}