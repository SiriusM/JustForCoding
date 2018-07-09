
## [1.Two Sum](https://leetcode.com/problems/two-sum/description/) ##

## 2.解法 ##
+ 方法一 

    采用map记录数组出现的数，然后遍历数组查看对应的数是否出现,以空间换时间，空间复杂度O(n),时间复杂度O(n);
    ```
    class Solution {
    public:
       vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> m;
            vector<int> res;
            for(int i=0;i<nums.size();i++){
              if(m[target-nums[i]]!=0){
                  res.push_back(i);
                  res.push_back(m[target-nums[i]]-1);
                  break;
              }
              m[nums[i]]=i+1;
            }
          return res;
      }
    };
    ```

+ 方法二 

   首先对数据进行排序，然后采用双指针前后进行夹逼，找到相应的结果，时间复杂度O(nlog(n));

    ```
  
    ```
