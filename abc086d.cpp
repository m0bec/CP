#include <bits/stdc++.h>
using namespace std;

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}

bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}

int n,k;
char ch;
int x[100000], y[100000], c[100000];
int ma[2010][2010];
int solve(int x1, int y1, int x2, int y2){
    return ma[x2][y2] - ma[x2][y1] - ma[x1][y2] + ma[x1][y1];
}
int main(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i] >> ch;
        if(ch == 'W'){
            y[i] += k;
        }
    }


    for(int i = 0; i < n; i++){
        ma[y[i] % (2*k)+1][x[i]%(2*k)+1]++;
    }

    for(int i = 1; i <= 2 * k; i++){
        for(int j = 1; j <= 2*k; j++){
            ma[i][j] += ma[i][j-1];
        }
    }

    for(int i = 1; i <= 2 * k; i++){
        for(int j = 1; j <= 2*k; j++){
            ma[i][j] += ma[i-1][j];
        }
    }

    int ans = 0,sum;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            sum = ma[i][j]
                + ma[2*k][j] - ma[i+k][j]
                + ma[i+k][j+k] + ma[i][j] - ma[i][j+k] - ma[i+k][j]
                + ma[i][2*k] - ma[i][k+j]
                + ma[2*k][2*k] + ma[k+i][k+j] - ma[k+i][2*k] - ma[2*k][k+j];
            ans = max(ans, max(sum, n-sum));
        }
    }

    cout << ans << endl;
}