#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int travel(vector<int> *graph, int *isVisit, int startNode){
    int count=0;
    isVisit[startNode] = 1;
    for(auto node: graph[startNode]){
        if(!isVisit[node]){
            count++;
            count += travel(graph, isVisit, node);
        }
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int compCount, edgeCount;
    cin >> compCount >> edgeCount;

    vector<int> network[compCount+1];
    int *isVisit = new int[compCount+1];

    int edge1=0, edge2=0;
    for(int i=0; i<edgeCount; i++){
        cin >> edge1 >> edge2;
        network[edge2].push_back(edge1);
    }

    vector<int> maxHack;
    int max=0;
    for(int i=0; i<compCount; i++){
        fill_n(isVisit, compCount+1, 0);
        maxHack.push_back(travel(network, isVisit, i+1));
        if(maxHack[i] > max)
            max = maxHack[i];
    }
    
    for(int i=0; i<compCount; i++){
        if(max == maxHack[i])
            cout << i+1 << " ";
    }


    delete isVisit;
    return 0;
}