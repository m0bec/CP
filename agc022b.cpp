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
 
long long mem[20010];
int n;
long long su;

long long gcd(long long a, long long b){
    if(b == 0)  return a;
    if(a>b) return  gcd(b,a%b);
    else    return gcd(a, b%a);
}

int main(){
    cin >> n;
    mem[0] = 2;
    mem[1] = 5;
    mem[2] = 63;
    int c = 0;
    su = 2+5;
    bool flag = false;
    for(int i = 3; i < n; i++){
        while(true){
            ++c;
                if(!flag){
                if(gcd(mem[2], su+c*10) != 1 && gcd(c*10, su+mem[2]) != 1){
                    if(c*10 <= 30000){
                    mem[i] = c*10;
                    su += mem[i];
                    break;
                    }
                    else{
                        flag = true;
                        c = 1;
                    }
                }
                }
                if(flag){
                    if(gcd(mem[2], su+mem[2]*c) != 1 && gcd(mem[2]*c, su+mem[2]) != 1){
                        mem[i] = mem[2] * c;
                        su += mem[2] * c;
                        break;
                    }
                }
            }
        }

    for(int i = 0; i < n; i++){
        cout << mem[i] << ' ';
    }
    cout << endl;
}