#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll are[400];
ll mem[2500];
ll ans;

int main(){
    int c = 0;
    for(int i = 1; i <= 12; i++){
        for(int j = 1; j <= 30; j++){
            if(i == 2 && j > 28)    break;
            are[c] = i*100+j;
            ++c;
        }
    }
    for(int i = 1; i <= 7; i+=2){
        are[c] = i*100+31;
        ++c;
    }
    for(int i = 8; i <= 12; i+=2){
        are[c] = i*100+31;
        ++c;
    }


    int cmem = 0;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            mem[are[i]+are[j]]++;
            ++cmem;
        }
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            if(are[i]-are[j] > 0){
                if(mem[are[i]-are[j]-1] > 0)    ans += mem[are[i]-are[j]-1];
                if(mem[are[i]-are[j]+1] > 0)    ans += mem[are[i]-are[j]+1];
            }
            if(mem[are[i]+are[j]+1] > 0)    ans += mem[are[i]+are[j]+1];
        }
    }

    double ca = ans;
    for(int i = 0; i < 4; i++)  ca/= 365.0;
    cout << ca << endl;
}