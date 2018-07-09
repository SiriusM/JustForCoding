/********************网易校园招聘************************/
//1.回文序列
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int left =0;
    int right = nums.size()-1;
    int res =0;
    while(left<right)
    {
        if(nums[left]==nums[right])
        {
            left++;
            right--;
        }
        else if(nums[left]<nums[right])
        {
            res++;
            nums[left+1]+=nums[left];
            left++;
        }
      	else
        {
            res++;
            nums[right-1]+=nums[right];
            right--;
        }
    }
    cout<<res<<endl;
}*/

//2.优雅的点
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int left =0 ;
    int right = sqrt(r);
    int res = 0;
    while(left<=right)
    {
        int sum = left*left+right*right;
        if(sum == r)
        {
            if(left==0||left==right)
            {
                 res+=4;
            }
            else
            {
                res+=8;
            }
            left++;
            right--;
        }
        else if(sum<r)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout<<res<<endl;
}*/
//3.跳石板
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
 // freopen("test.txt","r",stdin);
  int n,m;
  cin>>n>>m;
  queue<int> q;
  vector<int> dst(m+1,-1);
  q.push(n);
  dst[n]=0;
  while(!q.empty())
  {
      int size = q.size();
      for(int i =0 ;i<size;i++)
      {
          int temp  = q.front();
          q.pop();
          for(int i =2; i*i<=temp;i++)
          {
              if(temp%i==0)
              {
				if(temp+i<=m&&dst[temp+i]==-1)
                {
                    dst[temp+i]=dst[temp]+1;
                    q.push(temp+i);
                }
                if(temp+temp/i<=m&&dst[temp+temp/i]==-1)
                {
                    dst[temp+temp/i]=dst[temp]+1;
                    q.push(temp+temp/i);
                }
              }
          }
      }
  }
  cout<<dst[m]<<endl;
  return 0;
}
*/
//4.暗黑字符串
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<long long>dp(n+1,0);
        dp[1]=3;
        dp[2]=9;
        for(int i =3;i<=n;i++)
        {
            dp[i]=3*dp[i-2]+(dp[i-1]-dp[i-2])*2;
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}*/
//5.数字翻转
/*#include<bits/stdc++.h>
using namespace std;
int reverse(int x);
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<reverse(reverse(x)+reverse(y))<<endl;
    return 0;
}
int reverse(int x)
{
    int res =0;
    while(x)
    {
        res=res*10+x%10;
        x=x/10;
    }
    return res;
}*/
//6.最大奇约数
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    long long sum =0;
    int n=0;
    for(int i =31;i>=0;i--)
    {
        if(x&(1<<i))
        {
            n=i;
            break;
        }
    }
    while(n>=0)
    {
        int temp = pow(2,n);
        int size = x/temp;
        for(int i=1;i<=size;i+=2)
        {
            sum+=i;
        }
        n--;
    }
    cout<<sum<<endl;
}*/
//7.买苹果
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,10001);
    dp[0]=0;
    vector<int> nums(2,0);
    nums[0]=6;
    nums[1]=8;
    for(int i =0;i<nums.size();i++)
    {
   		for(int j=0;j<=n;j++)
        {
         	if(j>=nums[i])
            {
                dp[j]=min(dp[j],dp[j-nums[i]]+1);
            }
        }
   }
    if(dp[n]>100)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<dp[n]<<endl;
    }

}*/
//8.计算糖果
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int a,b,c;
    if((x1+x3)%2!=0||(x2+x4)%2!=0)
    {
        cout<<"No"<<endl;
    }
    else
    {
        a=(x1+x3)/2;
    	b=(x2+x4)/2;
    	c=x4-b;
    	if(b==x3-a)
    	{
        	cout<<a<<" "<<b<<" "<<c<<endl;
    	}
    	else
    	{
        	cout<<"No"<<endl;
    	}
    }
    return 0;
}*/
