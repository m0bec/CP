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
long long ans, mem;
int a[200000], b[200000], c[200000];

int main(){
   cin >> n;
   for(int i = 0; i < n; i++)   cin >> a[i];
   for(int i = 0; i < n; i++)   cin >> b[i];

    for(int i = 1; i <= 29; i++){
        mem = 0;
        for(int j = 0; j < n; j++)  c[j] = b[j]%(1<<i);
        sort(c, c+n);

        for(int j = 0; j < n; j++){
            if((a[j] & (1<<(i-1))) == 0){
                mem += lower_bound(c, c+n, (1<<i) - (a[j]%(1<<i))) - lower_bound(c, c+n, (1<<(i-1)) - (a[j]%(1<<i)));
            }
            else{
                mem += (lower_bound(c, c+n, (1<<i) - (a[j]%(1<<i)))-c);
                if(i != 1){
                    mem += n-(lower_bound(c, c+n, (1<<i)+(1<<(i-1)) - (a[j]%(1<<i)))-c);
                }
            }
        }

        if(mem%2 == 1){
            ans ^= 1<<(i-1);
        }
    }

    cout << ans << endl;
}