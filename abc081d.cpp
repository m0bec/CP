#include <iostream>
#include <queue>
#include <algorithm>
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
    max = b[n-1];
    for(int i = 0; i < n; i++){
        if(a[i] == max){
            maxnum = i;
            break;
        }
    }
    for(int i = 1; i < n; i++){
        while(a[i-1] > a[i]){
            a[i] += max;
            quex.push(maxnum);
            quey.push(i);
            ansnum++;
            if(max < a[i]) {
                max = a[i];
                maxnum = i;
            }
        }
    }

    cout << ansnum << '\n';
    while(quex.size()){
        cout << quex.front() << ' ' << quey.front() << '\n';
        quex.pop();quey.pop();
    }
}