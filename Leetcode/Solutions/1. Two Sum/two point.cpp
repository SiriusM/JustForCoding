class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sortNums(nums);
        vector<int> index;
        int size=nums.size();
        int left=0;
        int right=size-1;
        std::sort(sortNums.begin(),sortNums.end());
        while(left<right)
        {
            if(sortNums[left]+sortNums[right]==target)
            {
            for(int i=0;i<size;i++)
            {
                if(nums[i]==sortNums[left])
                index.push_back(i+1);
                else if(nums[i]==sortNums[right])
                index.push_back(i+1);
            }
               if(index.size()==2)
                return index;
            }
            else
            {
            if(sortNums[left]+sortNums[right]<target)
            left++;
            else
            right--;
            }
        }
    }
};