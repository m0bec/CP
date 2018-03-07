#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    vector<int> sa, ta;
    for(int i = 0; i < s.length(); i++){
       sa.push_back(s[i] - 'a');
    }
    sort(sa.begin(), sa.end());
    for(int i = 0; i < t.length(); i++) ta.push_back(t[i] - 'a');
    sort(ta.begin(), ta.end(), greater<int>());

    for(int i = 0; i < min(sa.size(), ta.size()); i++){
        if(sa[i] < ta[i]){
            cout << "Yes\n";
            return 0;
        }else if(sa[i] > ta[i]){
            cout << "No\n";
            return 0;
        }
    }

    if(sa.size() < ta.size()){
        cout << "Yes\n";
    }else   cout << "No\n";
}