#include <iostream>
#include <string>
using namespace std;

string S, T;
int main(){
    int c=0;
    cin >> S >> T;
    bool flag = false;
    for(int i = S.length()-1; i >= 0; i--){
        for(int j = 0; j <T.length(); j++){
            if(i-j >= 0){
                if(S[i-j] == T[T.length()-1-j] || S[i-j] == '?') {
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }else{
                flag = false;
                break;
            }
        }
        if(flag){
            for(int k = 0; k < T.length(); k++){
                S[i-k] = T[T.length()-1-k];
            }
            for(int k = 0; k < S.length(); k++){
                if(S[k] == '?') S[k] = 'a';
            }
            cout << S << '\n';
            return 0;
        }
    }
    cout << "UNRESTORABLE\n";
}