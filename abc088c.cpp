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

int c[3][3];
int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)  cin >> c[i][j];
    }
    int sa[3];
    sa[0] = c[0][0] - c[0][1];
    sa[1] = c[0][0] - c[0][2];
    sa[2] = c[0][1] - c[0][2];
    for(int i = 0; i < 3; i++){
        for(int j = 1; j < 3; j++){
            if(sa[j-1] != c[i][0] - c[i][j]){
                cout << "No\n";
                return 0;
            }
        }
        if(sa[2] != c[i][1] - c[i][2]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}