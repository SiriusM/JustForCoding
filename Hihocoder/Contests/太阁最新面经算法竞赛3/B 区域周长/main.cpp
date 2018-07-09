#include<bits/stdc++.h>
using namespace std;
int dx[4]= {-1,0,0,1};
int dy[4]= {0,-1,1,0};
const int M=101;
const int N=101;
int matrix[M][N];
int m,n;
void dfs(int value,int i,int j,int& res);
int main()
{
    //freopen("test.txt","r",stdin);
    int x,y;
    scanf("%d%d%d%d",&m,&n,&x,&y);
    memset(matrix,0,sizeof(matrix));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int res=0;
    dfs(matrix[x][y],x,y,res);
    cout<<res<<endl;
}
void dfs(int value,int i,int j,int& res)
{
    if(i<0||i>m-1||j<0||j>n-1)
        return ;
    if(matrix[i][j]!=value)
        return ;
    int num=0;
    matrix[i][j]=101;
    res+=(res==0?4:2);
    for(int k=0; k<4; k++)
    {
        if(matrix[i+dx[k]][j+dy[k]]==101)
        {
            num++;
        }
    }
    if(num>1)
        res-=(num-1)*2;
    for(int k=0; k<4; k++)
    {
        dfs(value,i+dx[k],j+dy[k],res);
    }
}
