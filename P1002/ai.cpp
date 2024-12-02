#include <iostream>
using namespace std;

int fx[9] = {-2, -2, -1, -1, 0, 1, 1, 2, 2}; // 马的跳跃横向位移
int fy[9] = {1, -1, 2, -2, 0, 2, -2, 1, -1}; // 马的跳跃纵向位移
int mx, my; // 马的位置
int bx, by; // 目标位置
int sum = 0; // 路径计数
bool vis[20][20]; // 访问标记数组，用于状态剪枝
bool horse[20][20]; // 马的控制区域标记

// 判断是否在马的控制范围内
bool panduan(int x, int y) {
    return horse[x][y];
}

// 初始化马的控制范围
void markHorseControl() {
    for (int i = 0; i < 9; i++) {
        int nx = mx + fx[i];
        int ny = my + fy[i];
        if (nx >= 0 && ny >= 0 && nx <= bx && ny <= by) { // 在棋盘范围内
            horse[nx][ny] = true;
        }
    }
}

// 深度优先搜索
void scan(int x, int y) {
    // 剪枝条件
    if (x > bx || y > by || panduan(x, y)) return; // 越界或被马控制的点
    if (vis[x][y]) return; // 已访问过的点

    // 如果到达目标点，路径计数加1
    if (x == bx && y == by) {
        sum++;
        return;
    }

    vis[x][y] = true; // 标记当前位置为已访问

    // 尝试向右和向上搜索
    scan(x + 1, y); // 向右移动
    scan(x, y + 1); // 向上移动

    vis[x][y] = false; // 回溯，解除访问标记
}

int main() {
    cin >> bx >> by >> mx >> my;

    // 初始化状态
    markHorseControl();
    scan(0, 0);

    cout << sum; // 输出所有有效路径数
    return 0;
}