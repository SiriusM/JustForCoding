###[B.区域周长](http://hihocoder.com/contest/hihointerview8/problem/2) ###

#### 题目详解 ####
+ 解题思想

  深度优先搜索,从开始点搜索与该点相等的区域，计算起周长

+ 特殊情况
  
  考虑一种特殊情况当某一个区域和其他多个区域相连的周长的计算问题;即先计算该区域相连的访问过的区域数目,如果数目大于1那么,出掉到达该区域的前一个区域,还要减去剩下相连区域的周长;

+ 题目解法
  
  使用深度优先搜索,对区域进行搜索(上下左右四个方向),当两个区域的值不相等,直接返回;当搜索到两个区域数值相等，那么周长加2,周长的初始值为4;同时更新区域的值,并检测该区域的四个方向上已经访问过区域的数目，如果该数目大于1,应该减去该区域与大于1的其他区域的重叠部分;

+ [源代码](https://github.com/SiriusM/Hihocoder/blob/master/Contests/%E5%A4%AA%E9%98%81%E6%9C%80%E6%96%B0%E9%9D%A2%E7%BB%8F%E7%AE%97%E6%B3%95%E7%AB%9E%E8%B5%9B3/B%20%E5%8C%BA%E5%9F%9F%E5%91%A8%E9%95%BF/main.cpp)
