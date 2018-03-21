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

long long h,w, men, mi, ans = LLONG_MAX, ma;

int main(){
    cin >> h >> w;
    
    for(int i = 1; i < h; i++){
        men = i * w;
        if(h-i >= 2){
            ma = max((h-i-(h-i)/2)*w, max(men, (h-i)/2*w));
            mi = min((h-i-(h-i)/2)*w, min(men, (h-i)/2*w));
            ans = min(ans, ma - mi);
        }

        ma = max((w-w/2) * (h-i), max(men, w/2 * (h-i)));
        mi = min((w-w/2) * (h-i), min(men, w/2 * (h-i)));
        ans = min(ans,ma-mi);
    }

    for(int i = 1; i < w; i++){
        men = i * h;
        if(w-i > 2){
            ma = max((w-i-(w-i)/2)*h, max(men, (w-i)/2*h));
            mi = min((w-i-(w-i)/2)*h, min(men, (w-i)/2*h));
            ans = min(ans, ma - mi);
        }

        ma = max((h-h/2) * (w-i), max(men, h/2*(w-i)));
        mi = min((h-h/2) * (w-i), min(men, h/2*(w-i)));
        ans = min(ans,ma-mi);
    }

    cout << ans << endl;
}