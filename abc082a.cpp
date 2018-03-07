#include <iostream>

using namespace std;

int main(){
    double a,b;
    cin >> a >>b;
    double ans = 0;
    ans = (a+b)/2;
    if(ans >= (int)ans + 0.5)    cout << (int)ans + 1<< '\n';
    else    cout << (int)ans << endl;
}