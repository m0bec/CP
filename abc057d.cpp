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

int n, a, b, cou;
double v[60], dp[60][60];
double ave;
long long ansnum, pas[51][51];
int aa;
int main(){
    pas[1][0] = pas[1][1] = 1;
    for(int i = 2; i <=50; i++){
        pas[i][0] = pas[i][i] = 1;
        for(int j = 1; j < i; j++){
            pas[i][j] = pas[i-1][j-1] + pas[i-1][j];
        }
    }
    cin >> n >> a >> b;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v, v+n);

    if(v[0] == v[n-1]){
        ave = v[0];
        cou = 1;
        for(int i = a; i <= b; i++){
            ansnum += pas[n][i];
        }
    }
    else{
        cou = a;
        for(int i = 1; i <= a; i++){
            ave += v[n-i];
        }
        ave /= a;
        if(v[n-a] == v[n-a-1] || v[n-a] == v[n-a+1]){
            cou = 0;
            int cou2 = 1;
            for(int i = a+1; i <= n; i++){
                if(v[n-a] == v[n-i])    ++cou;
                else    break;
            }
            for(int i = a-1; i>= 0; i--){
                if(v[n-a] == v[n-i])    ++cou2;
                else    break;
            }
            if(v[n-1] == v[n-a]){
                for(int i = a; i <= min(b, cou+cou2); i++){
                    ansnum += pas[cou+cou2][i];
                }
            }
            else{
                ansnum += pas[cou+cou2][cou2];
            }
        }
        else{
            ansnum = 1;
        }
    }
    printf("%lf\n", ave);
    cout <<  ansnum << endl;
}
