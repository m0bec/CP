#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n, maxnum, ansnum = 0;
    long long a[50], b[50];
    long long max;
    queue<int> quex,quey;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    if(abs(b[n-1]) > abs(b[0])) max = b[n-1];
    else max = b[0];
    for(int i = 0; i < n; i++){
        if(a[i] == max){
            maxnum = i + 1;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(max >= 0){
                quey.push(i+1);
                quex.push(maxnum);
        }else{
                quey.push(n-i);
                quex.push(maxnum);
        }
        ansnum++;
    }
    for(int i = 0; i < n-1; i++){
        if(max > 0){
            quey.push(i+2);
            quex.push(i+1);
        }
        else{
            quey.push(n-i-1);     
            quex.push(n-i);
        }
        ansnum++;
    }

    cout << ansnum << '\n';
    while(quey.size()){
        cout << quex.front() << ' ' << quey.front() << '\n';
        quex.pop();quey.pop();
    }
}