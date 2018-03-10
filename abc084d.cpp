#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int n;
int l,r, tar, fin;
int mem[100001] = {}, somem[100001] = {};
queue<int> que;
vector<int> so;

int main(){
    int upper = 100000;
    for(int i = 2; i <= upper; i++){
        que.push(i);
    }
    for(int i = 2; i <= upper; i++){
        if(que.size() != 0){
            so.push_back(que.front());
            somem[que.front()] = 1;
            tar = que.front();
            que.pop();
        }
        fin = que.size();
        for(int j = 0; j < fin; j++){
            if(que.front() % tar != 0){
                que.push(que.front());
                que.pop();
            }
            else    que.pop();
        }
    }
    so.push_back(0);
    int vecpos = 0;
    for(int i = 1; i < 100001; i++){
        if(i == so[vecpos]){
            mem[i] = mem[i-1];
            if(somem[(so[vecpos]+1)/2] == 1){
                mem[i]++;
            }
            vecpos++;
        }
        else    mem[i] = mem[i-1];
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        cout << mem[r] - mem[l-1] << '\n';
    }
}