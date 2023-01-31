#include <iostream>
#include <vector>

using namespace std;

int travel(vector<int> *graph, int *isVisit, int startNode){
    int count=0;
    for(auto node: graph[startNode]){
        if(!isVisit[node]){
            isVisit[node] = 1;
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
    fill_n(isVisit, compCount+1, 0);
    
    int edge1=0, edge2=0;
    for(int i=0; i<edgeCount; i++){
        cin >> edge1 >> edge2;
        network[edge1].push_back(edge2);
        network[edge2].push_back(edge1);
    }

    isVisit[1] = 1;
    cout << travel(network, isVisit, 1);

    delete isVisit;
    return 0;
}