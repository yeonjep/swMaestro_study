#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >>n;

    int a[1001];
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int dp[1001], maxDp;
    for(int i=0; i<n; i++){
        dp[i] = 1;
        maxDp = 0;
        for(int j=0; j<i; j++){
            if(a[j] < a[i])
                maxDp = max(maxDp, dp[j]);
        }
        dp[i] += maxDp;
    }
    cout << *max_element(dp, dp+n);
}
