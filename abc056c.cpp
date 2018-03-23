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

long long x;

int main(){
    cin >> x;
    long long move = 0;
    for(long long i = 1; i < 1000000000; i++){
        move += i;
        if(move >= x){
            cout << i << endl;
            return 0;
        }
    }
}