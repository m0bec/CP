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
 
int h,w;
char s[401][401];
int f[401][401];
 
struct masu{
    int i,j;
    char color;
};
 
 queue<masu> st;
 
    int mi[] = {1,-1,0,0};
    int mj[] = {0,0,1,-1};
 
 
 
int main(){
 //  cin >> h >> w;
   // for(int i = 0; i < h; i++)  cin >> s[i];

    h = 100;
    w = 100;
    random_device rnd;
    mt19937 mt(rnd());
    uniform_int_distribution<> rand100(0,1);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
        int aa = rand100(mt);
       // cout << aa << ' ';
        if((i+j)%2 == 0)   s[i][j]='#';
        else    s[i][j] +='.';
        }
       // cout << endl;
    }
    for(int i = 0; i < h; i++){
       // cout << s[i] << endl;
    }
    masu start;
 
    ll ans = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++)  f[i][j]=0;
    }
 
    ll suma,sumb;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(f[i][j])  continue;
            start.i = i;
            start.j = j;
            start.color = s[i][j];
    
            st.push(start);
  
            suma = sumb = 0;

    while(!st.empty()){
        masu mem = st.front();
        st.pop();
        masu ne;
        if(f[mem.i][mem.j]) continue;
        f[mem.i][mem.j] = 1;
        if(mem.color == '.')    ++suma;
        else    ++sumb;
 

        for(int ii = 0; ii < 4; ii++){
            int ni = mem.i+mi[ii];
            int nj = mem.j+mj[ii];
 
            if(ni < h && ni >= 0 && nj < w && nj >= 0){
                if(s[ni][nj] != mem.color){
                    ne.i = ni;
                    ne.j = nj;
                    ne.color = s[ni][nj];
                    st.push(ne);
                }
            }
        }
    }
    ans += suma*sumb;
        }
    }
 
    cout << ans << endl;
}