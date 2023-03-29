#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    vector<pair<int, int>> timetable;
    int temp1, temp2;
    for(int i=0; i<n; i++){
        scanf("%d %d", &temp1, &temp2);
        timetable.push_back({temp2, temp1});
    }

    sort(timetable.begin(), timetable.end());

    int presTime=0, count=0;
    for(int i=0; i<n; i++){
        if(timetable[i].second < presTime) continue;
        count++;
        presTime = timetable[i].first;
    }

    printf("%d", count);
    
    return 0;
}