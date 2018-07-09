# 回溯法(Backtracking) #
***
## 回溯法的基本思想 ##

## 剪枝函数 ##

## 解题步骤 ##
>### 1.定义问题的解空间(树状结构) ###
>
>### 2.确定易于搜索的解空间结构 ###
>
>### 3.使用递归或者迭代的方法搜索符合要求的解空间，并使用约束条件和剪枝函数避免无效的搜索
## 算法框架 ###

### 递归算法 ###
<pre><code>
int void BackTracking(int t) //参数t表示当前递归深度
{
	if(t>n) Output(x)  //遍历到解，则将解输出或者其他处理，n用来控制递归深度即解空间树的高度
	else
	{
		//f(n,t)和g(n,t)表示当前节点(扩展节点)处未搜索过的子树的起始编号和终止编号
		for(int i=f(n,t);i< g(n,t);i++)
		{
			x[t]=h(i);  //h(i)表示当前节点(扩展节点)处x[i]的第i个可选值
			if(Constarint(t)&&Bound(t))  //剪枝函数、约束函数、界限函数
				Backtrack(t+i);
		}
		返回上一状态
	}

}

</code></pre>
### 迭代算法 ###
<pre><code>
void BackTracking()   
{
	int a[n],i;  //初始化数组a[n]
	i=1;
	while(i>0 and (expression)) //当有路可走并没有到达目标时
	{
		if(i>n)   //搜索到叶节点
		{
			搜索到一个解，输出；
		}
		else
		{
			a[i]第一个可能值；
			while(a[i]在不满足约束条件其在搜索空间之中)
			{
				a[i]下一个可能的值；
			}
			if(a[i]在搜索空间之内)
			{
				标识使用a[i];
				i=i+1;
			}
			else
			{
				清理所占用的状态空间；
				i=i-1;
			}
		}
	}
}
</code></pre>

## 算法示例 ##
+ [31. Next Permutation](https://leetcode.com/problems/next-permutation/)
+ [46. Permutations](https://leetcode.com/problems/permutations/)
+ [47. Permutations II](https://leetcode.com/problems/permutations-ii/)
+ [60. Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)
+ [78. Subsets](https://leetcode.com/problems/subsets/)
+ [90. Subsets II](https://leetcode.com/problems/subsets-ii/)
+ [77. Combinations](https://leetcode.com/problems/combinations/)
+ [39. Combination Sum](https://leetcode.com/problems/combination-sum/)
+ [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)
+ [216. Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)
+ [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)
