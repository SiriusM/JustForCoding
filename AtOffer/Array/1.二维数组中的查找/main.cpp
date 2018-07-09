#include <bits/stdc++.h>
using namespace std;
bool find_matrix(vector<vector<int>>& matrxi,int target);
int main()
{
    int nums[4][5]={{1,3,5,6,9},{3,4,6,8,10},{5,7,9,12,15},{9,12,24,26,30}};
    vector<vector<int>> matrix(4,vector<int>(5,0));
    for(int i =0 ;i<4;i++)
    {
        vector<int> row = vector<int>(nums[i],nums[i]+5);
        matrix.push_back(row);
    }
    cout<< find_matrix(matrix,14)<<endl;
    return 0;
}
bool find_matrix(vector<vector<int>>& matrix,int target){
    int i =0;
    int row = matrix.size();
    if(row==0)
    {
        return false;
    }
    int j =matrix[0].size()-1;
    while(i<row&&j>=0)
    {
        if(matrix[i][j]==target)
        {
            return true;
        }
        else if(matrix[i][j]<target)
        {
            i++;
        }else
        {
            j--;
        }
    }
    return false;
}
