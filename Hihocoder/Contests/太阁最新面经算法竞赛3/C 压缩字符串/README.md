###[C.压缩字符串](http://hihocoder.com/contest/hihointerview8/problem/3) ###

#### 题目详解 ####
+ 解题思想
  1. 分治法和备忘录法
+ 特殊情况
  1. 当字符串压缩的长度大于原本字符串的长度
  2. 当字符串存在嵌套的时候
+ 题目解法
  1. 当字符串的长度小于4,直接返回
  2. 当字符串存在嵌套的时候,返回嵌套的长度
  3. 当字符串不存在嵌套的时候，采用分治的方法计算字符串的长度,并记录该字符串的长度;
+ [源代码](https://github.com/SiriusM/Hihocoder/blob/master/Contests/%E5%A4%AA%E9%98%81%E6%9C%80%E6%96%B0%E9%9D%A2%E7%BB%8F%E7%AE%97%E6%B3%95%E7%AB%9E%E8%B5%9B3/C%20%E5%8E%8B%E7%BC%A9%E5%AD%97%E7%AC%A6%E4%B8%B2/main.cpp)
