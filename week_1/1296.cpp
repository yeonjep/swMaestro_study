/*

맞음

입력
첫째 줄에 연두의 영어 이름이 주어진다. 둘째 줄에는 팀 이름 후보의 개수 N이 주어진다. 셋째 줄부터 N개의 줄에 팀 이름이 한 줄에 하나씩 주어진다.

연두의 영어 이름과 팀 이름은 길이는 1보다 크거나 같고, 20보다 작거나 같으며, 알파벳 대문자로만 이루어져 있다. N은 50보다 작거나 같은 자연수이다.

출력
첫째 줄에 우승할 확률이 가장 높은 팀 이름을 출력한다.

L 76
O 79
V 86
E 69
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    int name_love[4]={0};
    string name;
    cin>>name;
    for(int i = 0; i<name.length(); i++){
        if(name[i]=='L')
            name_love[0]++;
        else if(name[i]=='O')
            name_love[1]++;
        else if(name[i]=='V')
            name_love[2]++;
        else if(name[i]=='E')
            name_love[3]++;
    }

    int n;
    cin>>n;

    vector<string> team(n);
    int love[n][4] = {0};
    int result[n] = {0};
    multimap<int,string> love_m;

    int max = 0;
    
    for(int i =0; i<n; i++){
        cin>>team[i];

        for(int j = 0; j<team[i].length(); j++){
        if(team[i][j]=='L')
            love[i][0]++;
        else if(team[i][j]=='O')
            love[i][1]++;
        else if(team[i][j]=='V')
            love[i][2]++;
        else if(team[i][j]=='E')
            love[i][3]++;
    }

    result[i] = ((name_love[0]+love[i][0]+name_love[1]+love[i][1])
    * (name_love[0]+love[i][0]+name_love[2]+love[i][2])
    * (name_love[0]+love[i][0]+name_love[3]+love[i][3])
    * (name_love[1]+love[i][1]+name_love[2]+love[i][2])
    * (name_love[1]+love[i][1]+name_love[3]+love[i][3])
    * (name_love[2]+love[i][2]+name_love[3]+love[i][3])
    )%100;

    love_m.insert(make_pair(result[i], team[i]));
    max = max < result[i]?result[i]:max;
    }
    
    if(love_m.count(max)==1)
        cout<<love_m.find(max)->second;
    else{
        vector<string> result_str;

        multimap<int, string>::iterator iter1;

        for(iter1 = love_m.lower_bound(max); iter1 != love_m.upper_bound(max); iter1++){
            result_str.push_back(iter1->second);
    }
        
        sort(result_str.begin(), result_str.end());

        cout<<result_str.front();
    }
        
    return 0;

}