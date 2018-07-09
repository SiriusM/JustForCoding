## 图的基本算法 ##
---
## 1.拓扑排序 ##
### 基本思想 ###
>拓扑排序是对有向无环图的顶点的一种排序方法
 ![Alt text](/topological.png)
>### 图的表示方法 ###
>#### 邻接矩阵 ####
>
>#### 邻接表 ####
>
>### 伪代码 ###
>#### 入度排序 ####
>该方法的每一步总是输出当前无前趋(即入度为零)的顶点，输出“拓扑次序”
<pre><code>
	NoPreFirstSort(G)  //优先输出无前趋的的顶点
	{
		//可以采用栈和队列来保存入度为零的顶点
		while(G中有入度为零的顶点)
		{
			从G中选择一个入度为零的顶点并输出V;
			从G中删除与V相关的输出边，并更新与V相关顶点的入度；
		}
	}
	if(输出点数目==G中的顶点数目)
		输出拓扑排序的结果
	else
		图中存在环路
</code></pre>

#### 出度排序 ####
>该方法的每一步总是输出当前无后驱(即出度为零)的顶点，输出"逆拓扑排序"
<pre><code>
	NoSuccFirstSort(G)  //优先输出无后继的顶点
	{
		//可以采用栈和队列来保存出度为零的顶点
		while(G中有出度为零的顶点)
		{
			从G中选择一个出度为零的顶点并输出V;
			从G中删除与V相关的输出边，并更新与V相关顶点的出度；
		}
	}
	if(输出点数目==G中的顶点数目)
		输出拓扑排序的结果
	else
		图中存在环路
</code></pre>

#### 深度优先 #####
>当从V点出发的DFS完成时，那么V点的所有后继必定均已被访问过，此时V相当于无后继的节点，因此在DFS算法返回之前输出V，那么就得到DAG的逆拓扑排序；
<pre><code>
	void DFSTopSort(G,i,T)
	{
		int j;
		visited[i]=true; //表示访问过
		for(i的所有邻接点j) //即<i,h>属于E(G)
		{
			if(!visited[j])
			DFSTopSort(G,j,T);
		}
		Push(&T,i)；//从i出发的所有后继均已搜索完成
	}
</code></pre>

### 题目 ###
+ [Hihocoder 1174---拓扑排序·一](http://hihocoder.com/problemset/problem/1174?sid=712041)
+ [Hihocoder 1175---拓扑排序.二](http://hihocoder.com/problemset/problem/1175?sid=712359)
