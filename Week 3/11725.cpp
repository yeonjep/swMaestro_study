#include <iostream>
#include <vector>

using namespace std;

int isVisit[100001]={0, };
int output[100001]={0, };

void travel(vector<int> *graph, int *isVisit, int startNode){
    for(auto node: graph[startNode]){
        if(!isVisit[node]){
            isVisit[node] = 1;
            output[node] = startNode;
            travel(graph, isVisit, node);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int compCount;
    cin >> compCount;

    vector<int> network[compCount+1];
    
    int edge1=0, edge2=0;
    for(int i=0; i<compCount-1; i++){
        cin >> edge1 >> edge2;
        network[edge1].push_back(edge2);
        network[edge2].push_back(edge1);
    }

    isVisit[1] = 1;
    travel(network, isVisit, 1);

    for(int i=2; i<compCount+1; i++) cout << output[i] << "\n";
    return 0;
}