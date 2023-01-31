#include <queue>
#include <vector>

using namespace std;


int main(){
    vector<vector<int>> maps = {{1, 0, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 1}, {1, 1, 1, 0, 0}, {0, 0, 0, 0, 1}};
    
    int n = maps.size();
    int m = maps[0].size();

    int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int check[101][101] = {0, };

    queue<pair<int, int>> route;
    route.push({0, 0});
    check[0][0] = 1;

    int x, y, nextX, nextY;
    while(!route.empty()){
        y = route.front().first;
        x = route.front().second;
        route.pop();

        if(y == n-1 && x == m-1) return check[y][x];

        for(int i = 0; i < 4; i++){
            nextY = y + dir[i][0];
            nextX = x + dir[i][1];

            if(nextY < 0 || nextY >= n || nextX < 0 || nextX >= m) continue;
            if(maps[nextY][nextX] == 0) continue;
            if(check[nextY][nextX] != 0) continue;

            route.push({nextY, nextX});
            check[nextY][nextX] = check[y][x] + 1;
        }

        

    }


    return -1;
}