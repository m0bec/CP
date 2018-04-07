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
 
int a, b, h, w;
char c[17][17];
int gone[17][17];
bool flag;
int goy[] = {1,0,-1,0}, gox[] = {0,1,0,-1}, direct[] = {1,2,3,4};

void solve(int h_, int w_, int rc, int lc, int dir){
    if(h_ == h-1 && w_ == w-1){
        
        if(rc == a && lc == b){
            cout << "Yes\n";

               cout << a << ' ' << b << endl << h << ' ' << w << endl;
                for(int i = 1; i <= h; i++){
                    for(int j = 1; j <= w; j++){
                        if(gone[i][j] > 0)  cout << 'o';
                        else cout << c[i][j];
                    }
                    cout << endl;
                }

            exit(0);
        }
    }
    int memlc = lc, memrc = rc;
    for(int i = 0; i < 4; i++){
        if(c[h_+goy[i]][w_+gox[i]] == '.'){
            if(abs(i-dir) != 2){
                if(i == 0){
                    if(dir == 1)    lc++;
                    else if(dir == 3)   rc++;
                }
                else if(i == 1){
                    if(dir == 0)    rc++;
                    else if(dir == 2)   lc++;
                }
                else if(i == 2){
                    if(dir == 1)    rc++;
                    if(dir == 3)    lc++;
                }
                else if(i == 3){
                    if(dir == 2)    rc++;
                    else if(dir == 0)   lc++;
                }
            
                if(lc <= a && rc <= b) {
                    gone[h_+goy[i]][w_+gox[i]]++;
                    //cout << h_+goy[i] << ' ' << w_+gox[i] << endl;
                    solve(h_+goy[i], w_+gox[i], rc, lc, i);
                    gone[h_+goy[i]][w_+gox[i]]--;
                }
            }
            lc = memlc;
            rc = memrc;
        }
    }
}

    random_device rd;
    mt19937 mt(rd());
void test(){
    uniform_int_distribution<int> dice(1,15);
    uniform_int_distribution<int> hw(3,15);
    uniform_int_distribution<int> mas(0,1);
    a = dice(mt);
    b = dice(mt);
    h = hw(mt);
    w = hw(mt);
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 || i == h){
                c[i][j] = '#';
                continue;
            }
            if(j == 1 || j == w){
                c[i][j] = '#';
                continue;
            }
            if(mas(mt) == 0){
                c[i][j] = '.';
            }
            else{
                c[i][j] = '#';
            }
        }
    }
    c[2][2] = c[h-1][w-1] = '.';
}

int main(){
    /*
    cin >> a >> b;
    cin >> h >> w;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> c[i][j];
        }
    }
    */
    
   while(1){
       for(int i = 1; i <= h; i++){
           for(int j = 1; j <= w; j++)  gone[i][j] = 0;
       }
   test();

    gone[2][2] = true;
    solve(2,2,0,0,0);

    cout << "No\n";
   }
}