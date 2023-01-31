#include <vector>

using namespace std;

int answer = 0;

void search(int sum, int index, int target, vector<int> numbers){
    if(index == numbers.size()){
        if(sum == target) answer++;
        return;
    }

    search(sum + numbers[index], index + 1, target, numbers);
    search(sum - numbers[index], index + 1, target, numbers);
}

int main(){
    vector<int> numbers = {1, 1, 1, 1, 1};
    int target = 3;

    search(0, 0, target, numbers);


    return -1;
}