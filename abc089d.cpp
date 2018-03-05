#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

struct P{
    int h,w;
};

int main(){
    int h,w,d, q;
    int sa;
    P a[300*300+1];
    int aa[300*300+1] = {};
    int l[100000], r[100000];
    
    cin >> h >> w >> d;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            scanf("%d", &sa);
            a[sa].h = i+1;
            a[sa].w = j+1;
        }
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        scanf("%d %d", &l[i], &r[i]);
    }
    int mem = 0;
    for(int i = 1; i <= d; i++){
        mem = 0;
       for(int j = i; j <= h*w-d; j+=d){
           mem += abs(a[j].h - a[j+d].h) + abs(a[j].w - a[j+d].w);
           aa[j+d] = mem;
       }
    }
    int ans;
    for(int i = 0; i < q; i++){
        ans = aa[r[i]] - aa[l[i]];
        printf("%d\n", ans);
    }
}