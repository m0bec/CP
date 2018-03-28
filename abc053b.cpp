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
 
string s;
int ans, sta, fin;
bool f = false;
int main(){
    cin >> s;
    s += 'f';
    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == 'A'){
            sta = i;
            break;
        }
    }

    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == 'Z'){
            fin = i;
             break;
        }
    }

    cout << fin-sta+1<< endl;
}