#include <iostream>

using namespace std;

int main(){
    int n, m, max=0, cards[100]={};
    cin >> n >> m;

    for (int i=0; i<n; i++){
        cin >> cards[i];
    }

    for (int i=0; i<n-2; i++)
        for (int j=i+1; j<n-1; j++)
            for(int k=j+1; k<n; k++)
                if (cards[i]+cards[j]+cards[k]>max && cards[i]+cards[j]+cards[k]<=m)
                    max=cards[i]+cards[j]+cards[k];
    
    
    cout << max;

    return 0;
}
