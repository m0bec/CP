#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll are[400];
ll mem[400*400];
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
            mem[cmem] = are[i]+are[j];
            ++cmem;
        }
    }

    sort(mem,mem+cmem);

    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            if(binary_search(mem,mem+cmem,are[i]-are[j]-1)){
                // 1 = a1-a2-a3-a4 => a2+a3 = a1-a4-1
                ans += (upper_bound(mem,mem+cmem,are[i]-are[j]-1) - lower_bound(mem,mem+cmem,are[i]-are[j]-1))*1LL;
            }
            if(binary_search(mem,mem+cmem,-are[i]+are[j]+1)){
                // 1 = a1+a2+a3-a4 => -a2-a3 = a1-a4-1 => a2+a3 = -a1+a4+1
                ans += (upper_bound(mem,mem+cmem,-are[i]+are[j]+1) - lower_bound(mem,mem+cmem,-are[i]+are[j]+1))*1LL;
            }
            if(binary_search(mem,mem+cmem,are[i]+are[j]+1)){
                // 1 = a1+a2-a3-a4 => a3+a4+1 = a1+a2 => a1+a2 = a3+a4+1
                ans += (upper_bound(mem,mem+cmem,are[i]+are[j]+1) - lower_bound(mem,mem+cmem,are[i]+are[j]+1))*1LL;
            }
        }
    }
    double ca = ans;
    for(int i = 0; i < 4; i++)  ca/= 365.0;
    cout << ca << endl;
}