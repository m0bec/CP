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

int n;
pair<int,int> ab[110], cd[110];
int mem[110];

int main(){
    cin >> n;
    for(int i = 0; i <= 100; i++){
        ab[i].first = 100000;
        mem[i] = 1000000;
    }
    for(int i = 0; i < n; i++){
        cin >> ab[i].first >> ab[i].second;
    }
    for(int i = 0; i < n; i++){
        cin >> cd[i].first >> cd[i].second;
    }

    sort(ab, ab+n);
    sort(cd, cd+n);
    int aa[101];
    for(int i = 0; i < n; i++){
        aa[i] = ab[i].second;
    }
   

    int couab = 0, coucd = 0, ans = 0;
    bool flag = false;
    while(coucd < n){
        if(couab < n){
            if(ab[couab].first < cd[coucd].first){
                ++couab;
            }
            else{
                if(couab == 0){
                    coucd++;
                    continue;
                }
                sort(ab, ab+couab, SecondCompareDes);
                flag = false;
                for(int i = 0; i < couab; i++){
                    if(ab[i].second < cd[coucd].second){
                        ++ans;
                        ab[i].second = 1000000;
                        ++coucd;
                        flag = true;
                        break;
                    }
                }
                if(!flag)   ++coucd;
            }
        }
        else{
        sort(ab, ab+couab, SecondCompareDes);
        while(coucd < n){
            flag = false;
            for(int i = 0; i < couab; i++){
                if(ab[i].second < cd[coucd].second){
                    ++ans;
                    ab[i].second = 1000000;
                    ++coucd;
                    flag = true;
                    break;
                }
            }
            if(!flag)   ++coucd;
        }
        }
    }
    cout << ans << endl;
}