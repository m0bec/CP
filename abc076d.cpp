#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

bool SecondCompare(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
 
bool SecondCompareDes(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second>b.second;
}
 
int n;
double t[110], v[110];


int main(){
  double ans = 0.0;
   cin >> n;

   for(int i = 0; i < n; i++)   cin >> t[i];
   for(int i = 0; i < n; i++)   cin >> v[i];
    t[n] = v[n] = 0;
    for(int i = n-1; i >= 0; i--)   v[i] = min(v[i], v[i+1]+t[i]);

    double nv = 0, nt = 0;
   
   for(int i = 0; i < n; i++){

       while(t[i] > 0){
                  //printf("%lf %lf\n", ans, nv);
           if(nv-t[i] == v[i+1]){
                ans += (nv+v[i+1])*t[i]/2;
                t[i] = 0;
                nv = v[i+1];
           }
           else if(nv == v[i]){
               ans += v[i] * 0.5;
               t[i]-=0.5;
           }
           else{
               ans += (nv*2 + 0.5)*0.5/2;
               t[i] -= 0.5;
               nv += 0.5;
           }
       }
   }

    printf("%.8f\n", ans);
}