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
 
int n,a,b;
int ar[101] = {};

int main(){
    cin >> n >> a >> b;
    if(a-1 == b || a+1 == b){
        cout << "Borys" << endl;
        return 0;
    }
    if((a-b)%2==0){
        cout << "Alice" << endl;
    }
    else    cout << "Borys" << endl;
}