class Solution
{
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
        nums[ch]++;
        str+=ch;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
   			for(int i=0;i<str.length();i++)
            {
                if(nums[str[i]]==1)
                 {           
                    return str[i];
                }
            }
        	return '#';
    }
    
private:
    int nums[256];
    string str;
};
