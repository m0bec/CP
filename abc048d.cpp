#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;

string s;
bool judge, first;
int main(){
    cin >> s;

    if(s.length()%2 == 1){
        first= true;
    }
    judge = s[0] == s[s.length()-1];

    if(!first){
        if(judge)   cout << "First\n";
        else    cout << "Second\n";
    }
    else{
        if(judge)   cout << "Second\n";
        else    cout << "First\n";
    }

}