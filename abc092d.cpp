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
 
int a,b;
char tree[100][100];

int main(){
    cin >> a >> b;
    cout << 100 << ' ' << 100 << endl;
    
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 100; j++)    tree[i][j] = '.';
    }
    for(int i = 50; i< 100; i++){
        for(int j = 0; j < 100; j++)    tree[i][j] = '#';
    }
    --a;
    --b;
    for(int i = 0; i < 50; i += 2){
        for(int j = 0; j < 100; j += 2){
            if(b == 0)  break;
            tree[i][j] = '#';
            --b;
        }
    }

    for(int i = 51; i < 100; i += 2){
        for(int j = 0; j < 100; j += 2){
            if(a == 0)  break;
            tree[i][j] = '.';
            --a;
        }
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            printf("%c", tree[i][j]);
        }
        cout << '\n';
    }
}