#include <iostream>
using namespace std;

int main(){
    int n;
    int a1, a2, a3, a4;
    cin >> n;
    a1 = n / 1000;
    a2 = n / 100 - a1*10;
    a3 = n / 10 - a1*100 - a2*10;
    a4 = n % 10;
    
    if(a1 == a2 && a2 == a3)    {cout << "Yes\n";   return 0;}
    if(a2==a3 && a3 == a4)  {cout << "Yes\n";   return 0;}
    cout << "No\n";
}