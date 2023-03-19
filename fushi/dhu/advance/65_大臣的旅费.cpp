#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n;
int w[N], e[N], ne[N], h[N], idx; // 使用数组模拟链表 head存储链表头，e[]存储节点的值，ne[]存储节点的next指针，idx表示当前用到了哪个节点
int maxu, maxd;

void add(int a, int b, int c) // 使用邻接表存储图 a->b 有边权值为c
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++; // idx是当前新分配结点的下标 e存储结点值 w存储距离
                                                          // ne存储下一节点（头插法,即原来的头结点序号）
                                                          // 更新h新的头结点为当前idx idx自增
}
void dfs(int u, int fa, int d)
{
    for (int i = h[u]; i != -1; i = ne[i]) // 对邻接表遍历 如果还有下一连接结点
    {
        int j = e[i]; // u->j
        int k = w[i]; // 距离为w
        if (j == fa)  // 是父节点则跳过
            continue;
        if (maxd < d + k) // 当前结点距离更远 则更新maxd和maxu指向最远距离和结点
        {
            maxd = d + k;
            maxu = j;
        }
        dfs(j, u, d + k); // 继续向下dfs
    }
}
int main()
{
    cin >> n;
    memset(h, -1, sizeof h); // 初始化为-1
    int k = n - 1;
    while (k--) // 读入数据
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c); // 无向边 添加两次
        add(b, a, c);
    }
    dfs(1, -1, 0);                                       // 第一次dfs找最远点maxu
    dfs(maxu, -1, 0);                                    // 第二次dfs找直径
    cout << maxd * 10 + (maxd + 1ll) * maxd / 2 << endl; // 输出结果
    return 0;
}