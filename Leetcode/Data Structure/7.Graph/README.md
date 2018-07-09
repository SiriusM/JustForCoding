# 基本图算法 #
***
## 1.图的表示 ##
对于图G=(V,E)可以有两种表示方法：一种是将图作为邻接链表的组合，另一种是将图作为邻接矩阵的表示；表示稀疏图的时候往往选择邻接链表，表示稠密图的时候倾向于邻接矩阵;
>### 邻接链表 ###
>### 邻接矩阵 ###
>+ [133. Clone Graph](https://leetcode.com/problems/clone-graph/)
>
## 2.广度优先搜索 ##
> 广度优先搜索的是将已发现和未发现的节点之间的边界沿其广度方向向外扩展;
>### 伪代码 ###
+ [127. Word Ladder](https://leetcode.com/problems/word-ladder/)
+ [126. Word Ladder II](https://leetcode.com/problems/word-ladder-ii/)
+ [130. Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)
+ [200. Number of Islands](https://leetcode.com/problems/number-of-islands/)

## 3.深度优先搜索 ##
>深度优先搜索总是对最近才发现的节点V的出发边进行搜索，直到该节点的所有出发边都被发现为止。一旦节点V所有的出发边都被发现，搜索回到V的前驱点，搜索该前驱点的出发边；
>### 伪代码 ###
>
+ [22. Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)
+ [37. Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)
+ [51. N-Queens](https://leetcode.com/problems/n-queens/)
+ [52. N-Queens II](https://leetcode.com/problems/n-queens-ii/)
+ [93. Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/)
+ [131. Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)
+ [62. Unique Paths](https://leetcode.com/problems/unique-paths/)
+ [63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)
>

## 4.强强连通分量 ##
>有向图的强强连通分量是一个最大的节点集合C属于V，对于该集合中的任意节点u和v来说，路径u-->v和路径v-->u同时存在；
## 欧拉路 ##
### 定义 ###
>
+ 给定一个无独立点的节点图，若存在一条路经过图中的每条边有且仅有一次，则该回路称为欧拉路。
+ 如果一个无向图存在欧拉路，当且仅当该无向图是连通的并有且仅有两个节点的度数是奇数，此时这两个顶点只能是欧拉路的起点和终点
### 判断流程 ###
>若图G连通，有零个或两个奇数度结点，我们总有如下方法构造一条欧拉路：
>
+ 若有两个奇数度结点，则从其中的一个结点开始构造一条迹，即从v[0]出发经关联边e[1]"进入"v[1]"，若v[1]的度数为偶数，则必可由v[1]再经关联边e[2]进入v[2]，如此进行下去，每边仅取一次。由于G是连通的，故必可到达另一奇数度结点停下，得到一条迹L：v[0]-e[1]-v[1]-e[2]…v[i]-e[i+1]…v[k]。若G中没有奇数度结点则从任一结点v[0]出发，用上述方法必可回到结点v[0]，得到上述一条闭迹L1。
+ 若L1通过了G的所有边，则L1就是欧拉路。
+ 若G中去掉L1后得到子图G′，则G′中每个结点度数为偶数，因为原来的图是连通的，故L1与G′至少有一个结点v[i]重合，在G′中由v[i]出发重复第一步的方法，得到闭迹L2。
当L1与L2组合在一起，如果恰是G，则即得欧拉路，否则重复第三步可得到闭迹L3，以此类推直到得到一条经过图G中所有边的欧拉路。

### 5.Fleury算法求无向图欧拉路径 ###
>
><pre><code>
>DFS(u):
	while(u存在未被删除的边e(u,v))
		删除边e(u,v)
		DFS(v)
	end
	PathSize <--PathSize+1;
	Path[PathSize] <---u;
></code></pre>

### FLeury算法求有向图欧拉路径 ###
><pre><code>
>DFS(u):
	while(以u为起点，且未被删除的边e(u,v))
		删除边e(u,v)
		DFS(v)
	end
	PathSize <--PathSize+1
	Path[PathSize] <--u
	//使用Fleury计算有向图的欧拉路时，我们需要逆序输出才能得到正确路径
></code></pre>

## 6.割边与割点##

## 7.最短路径	##

## [8.图的算法] (graph2.md)
