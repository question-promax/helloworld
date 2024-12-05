#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;

int cnt = 0;

struct Process
{
    string pName;
    int pIds;
    int pPriority;
    int pStates;
    int pCPUs;
    string pDescription;
};

// 定义并初始化进程数组，按优先级降序排序
Process P[4] = {
    {"chrome.exe  ", 101, 10, 1, 3, "google chrome"},
    {"360.exe     ", 102, 7, 1, 1, "360 safe protect"},
    {"QQ.exe      ", 103, 5, 1, 4, "tencet QQ"},
    {"CPPIDE.exe  ", 104, 3, 1, 2, "CFree 5.0"}
};

// 按优先级降序排序的函数，返回true表示a在b前面，返回false表示a在b后面
bool cmp(Process a, Process b)
{
    return a.pPriority > b.pPriority;
}

// 输出每一时刻的进程状态
void output(Process P)
{
    cout <<P.pName <<left <<setw(5) <<P.pIds;
    cout <<left <<setw(3) <<P.pPriority;
    cout <<left <<setw(3) <<P.pStates;
    cout <<left <<setw(3) <<P.pCPUs;
    cout <<P.pDescription <<endl;
    cout <<endl;
}

// 主函数，模拟操作系统的进程调度
int main()
{
    sort(P, P + 4, cmp);
    for(int i = 0; i < 4; i++)
    {
        P[i].pStates = 2;
        while(P[i].pCPUs)
        {
            P[i].pCPUs--; cnt++;
            cout <<left <<setw(2) <<cnt <<':';
            output(P[i]);
        }
        P[i].pStates = 3;
        cout <<left <<setw(2) <<cnt <<':';
        output(P[i]);
    }
    return 0;
}