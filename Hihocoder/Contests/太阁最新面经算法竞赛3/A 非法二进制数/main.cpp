#include<bits/stdc++.h>
using namespace std;
//获取2^(n-2)次方
int getNum(int x)
{
    int result = 1;
    for(int i = 1; i <= x; i++)
        result = (result<<1)%((int)(pow(10, 9)+7));
    return result;
}
int main()
{
    int n;
    cin >> n;
    if(n <= 2)
    {
        if(n == 1) cout << "0" << endl;
        else cout << "1" << endl;
        exit(0);
    }
    vector<long> dp(n+1, 0);
    dp[2] = 1, dp[3] = 3;
    for(int i = 4; i <= n; i++)
		//状态方程 f(n)=f(n-1)+f(n-2)+2^(n-2);
        dp[i] = (dp[i-1] + dp[i-2] + getNum(i-2))%((int)(pow(10, 9)+7));
    cout << dp[n] << endl;
    return 0;
}
