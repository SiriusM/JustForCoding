### 1.二维数组中的查找
>##### 题目描述:
>
在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
>##### 解题思路:
+ 方法一:
+ 方法二:
```
class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        int i =0;
    	int row = array.size();
    	if(row==0)
    	{
        	return false;
    	}
    	int j =array[0].size()-1;
    	while(i<row&&j>=0)
    	{
        	if(array[i][j]==target)
        	{
            	return true;
        	}
        	else if(array[i][j]<target)
        	{
            	i++;
        	}else
        	{
            	j--;
       	 	}
    	}
    	return false;
    }
};

```
