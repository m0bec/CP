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
 
int n, a, b, fc, sc, sharec, shares;
vector<int> ftree[100001], stree[100001];
bool gonef[100001], gones[100001];
int dist[100001];

void solvef(int edge, int distc){
    dist[edge] = min(dist[edge], distc);    
    if(!gonef[edge]){
        gonef[edge] = true;
        fc++;
        for(int i = 0; i < ftree[edge].size(); i++){
            solvef(ftree[edge][i], distc+1);
        }
    }
}

void solves(int edge, int distc){
    if(!gones[edge] && edge != 0){
        gones[edge] = true;
        sc++;
        if(gonef[edge]){
            sharec++;
            if(dist[edge] > distc)  shares++;
        }
        for(int i = 0; i < stree[edge].size(); i++) solves(stree[edge][i], distc+1);
    }  
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)  dist[i] = INT_INF;
    for(int i = 0; i < n-1; i++){
        cin >> a >> b;
        ftree[a].push_back(b);
        ftree[b].push_back(a);
        stree[a].push_back(b);
        stree[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < ftree[i].size(); j++){
            if(ftree[i][j] == n)    ftree[i][j] = 0;
            if(stree[i][j] == 1)    stree[i][j] = 0;
        }
    }

    solvef(1, 0);
    solves(n, 0);
    fc--;
    sc--;
    sharec--;
    fc -= shares;
    sc -= (sharec-shares);
    if(fc > sc){
        cout << "Fennec\n";
    }
    else{
        cout << "Snuke\n";
    }
    //cout << fc << ' ' << sc << ' ' << sharec << endl;
}