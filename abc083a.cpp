#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c,d;
    cin >> a >> b >> c >> d;

    if(a+b > c+d)   cout << "Left\n";
    else if(a+b == c + d)   cout << "Balanced\n";
    else cout << "Right\n";
}