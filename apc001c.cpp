#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int n, i, s, first, now_place, c=0, next_place;
    int place[20];
    string status[20];
    bool flag = false;
    cin >> n;
    --n;
    if(n/2 % 2 != 0)    place[1] = n/2 + 1;
    else    place[1] = n/2;
    place[0] = 0;
    cout << "0\n";
    cin >> status[0];
    i = 1;
    int up = n;
    int down = 0;
    next_place = place[i];
    while(!flag){
        cout << place[i] << '\n';
        cin >> status[i];
        if(status[i] == status[i-1]){
            next_place += (up - place[i])/2;
            if(true){
                down = place[i];
                if(next_place % 2 != 0)  next_place++;
            }
        }
        else if(status[i] != status[i-1] && status[i] != "Vacant"){
            next_place -= (place[i] - down)/2;
            if(abs(place[i] - next_place) != 1){
                up = place[i];
                status[i] = status[i-1];
                if(next_place % 2 != 0) next_place++;
            }
        }
        else if(status[i] == "Vacant"){
            next_place = place[i];
        }
        ++i;
        if(i < 20)  place[i] = next_place;
        else flag = true;
    }

    return 0;
}