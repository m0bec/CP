#include <iostream>

using namespace std;

int n,m,x,y,c = 1;
int a[100000];
int group[100000] = {};

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        if(group[x] == 0){
            if(group[y] == 0){
                group[x] = group[y] = c;
                ++c;
            }else{
                group[x] = group[y];
            }
        }
        else{
            group[x] = group[y] = min(group[x], group[y]);
        }
    }
}