#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputNum;
    cin >> inputNum;

    vector<int> inputArray;
    int aver=0, center=0, freq=0, range=0, temp, arr[8001]={0, };
    for(int i=0; i<inputNum; i++){
        cin >> temp;
        inputArray.push_back(temp);
        aver += temp;
        arr[temp+4000]++;
    }

    aver = (int)round((double)aver/(double)inputNum);
    sort(inputArray.begin(), inputArray.end());
    center = inputArray[inputNum/2];
    range = inputArray.back() - inputArray.front();

    int mostFreq=0, check=0;
    for(int i=inputArray.front()+4000; i<inputArray.back()+4001; i++){
        if(arr[i]>mostFreq){
            freq = i-4000;
            mostFreq = arr[i];
            check=1;
        }
        else if(arr[i]==mostFreq && check){
            freq = i-4000;
            check=0;
        }
    }

    cout << aver << "\n" << center << "\n" << freq << "\n" << range;

    return 0;
}