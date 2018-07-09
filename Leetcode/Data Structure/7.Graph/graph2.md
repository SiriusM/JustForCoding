# 图的基本算法 #
***
## 最小生成树 ##
>贪心策略在每个时刻生长最小生长树的一条边，并在整个策略的实施过程中，管理一个遵循下述的循环不变式的边集合A:在每遍循环之前A是某棵最小生成树的子集
>
>轻量级边:在一个横跨切割的所有边中，权重最小的边称为轻量级边
### Kruskal算法 ###
在所有连接森林中两棵不同树的边里面找到权重最小的边(u,v);
### Prim算法 ###
从任意的根节点开始，选择一条边加入到A中，一直长大大覆盖V中的所有结点时为止
## 最短路径算法 ##
### Dijkstra算法 ###
### Floyd算法 ###
### SPFA算法(稀疏图) ###