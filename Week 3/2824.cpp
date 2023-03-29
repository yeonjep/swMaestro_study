#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> prime;
map<int, int> a, b;

/*
3
2 3 5
2
4 5
*/

void makeA(int n){
    for(auto o: prime){
        if(n%o == 0){
            a[o]++;
            makeA(n/o);
            return;
        }
    }
    if(n != 1)
        a[n]++;
}

void makeB(int n){
    for(auto o: prime){
        if(n%o == 0){
            b[o]++;
            makeB(n/o);
            return;
        }
    }
    if(n != 1)
        b[n]++;
}

int main(){
    bool visited[40001];
    for(int i=2; i<40000; i++){
        if(visited[i])
            continue;
        prime.push_back(i);
        for(int j=i*2; j<40000; j+=i)
            visited[j]=true;
    }

    int n, temp;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> temp;
        makeA(temp);
    }

    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> temp;
        makeB(temp);
    }
    
    long long int output = 1;
    int count, check=0;
    for(auto o:a){
        if(!b[o.first])
            continue;
        count = min(o.second, b[o.first]);
        for(int i=0; i<count; i++){
            output *= o.first;
            if(output >= 1000000000){
                output %= 1000000000;
                check = 1;
            }
        }
    }
    if(check)
        printf("%09lld", output);
    else
        cout << output;

    return 0;
}