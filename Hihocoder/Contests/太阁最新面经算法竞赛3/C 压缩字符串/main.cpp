#include<bits/stdc++.h>
using namespace std;
int compress(unordered_map<string,int>& m,string str);
int main()
{
    freopen("test.txt","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        unordered_map<string,int> m;
        cout<<compress(m,str)<<endl;
    }
    return 0;
}
int compress(unordered_map<string,int>& m,string str)
{
    if(str.size()<4)
        return str.size();
    if(m[str]>0) return m[str];
    int len=str.size();
    for(int i=1;i<=len/2;i++)
    {
        string temp=str.substr(0,i);
        int j;
        for(j=0;j<=len-i;j+=i)
        {
            if(temp!=str.substr(j,i))
                break;
        }
        if(j>=len)
            return to_string(len/i).size()+2+compress(m,temp);
        if(len==4)
            return 4;
    }
    int res=INT_MAX;
    for(int i=1;i<len;i++)
    {
        string left=str.substr(0,i);
        string right=str.substr(i);
        int l=compress(m,left);
        int r=compress(m,right);
        if(left.size()>3) m[left]=l;
        if(right.size()>3) m[right]=r;
        res=min(res,l+r);
    }
    return res;
}
