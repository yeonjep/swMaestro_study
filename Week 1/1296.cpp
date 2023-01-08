#include <iostream>

using namespace std;

int checker(string name, string search){
    int output=0, index=0;
    while(1){
        index = name.find(search);
        if(index == string::npos)
            break;
        output++;
        name = name.replace(index, 1, "");
    }
    return output;
}

int main(){
    string name;
    cin >> name;

    int L=0, O=0, V=0, E=0;
    L = checker(name, "L");
    O = checker(name, "O");
    V = checker(name, "V");
    E = checker(name, "E");

    int n, tempL, tempO, tempV, tempE, max=0, temp;
    string teamName, winner;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> teamName;
        tempL=0, tempO=0, tempV=0, tempE=0;

        tempL = checker(teamName, "L") + L;
        tempO = checker(teamName, "O") + O;
        tempV = checker(teamName, "V") + V;
        tempE = checker(teamName, "E") + E;

        temp = ((tempL+tempO)*(tempL+tempV)*(tempL+tempE)*(tempO+tempV)*(tempO+tempE)*(tempV+tempE)) % 100;
        if(temp > max|| i==0){
            max = temp;
            winner = teamName;
        }
        else if(temp == max)
            winner = (winner > teamName) ? teamName : winner; 
    }

    cout << winner;

    return 0;
}
