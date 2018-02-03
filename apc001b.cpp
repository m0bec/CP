#include <iostream>
using namespace std;

int main(){
    long long n, cp = 0, cm = 0;
    int a[10000], b[10000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)  cin >> b[i];
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) cm += 1LL * (a[i] - b[i]);
        else cp += 1LL * (b[i] - a[i])/2;
    }
    if(cp >= cm)  cout << "Yes\n";
    else cout << "No\n";
}