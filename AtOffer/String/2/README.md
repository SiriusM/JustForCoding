### 2. 把字符串转化为整数 ###
>
####题目描述
将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0 
输入描述:
输入一个字符串,包括数字字母符号,可以为空
>
####输出描述:
如果是合法的数值表达则返回该数字，否则返回0
>
####输入例子:
+2147483647
    1a33
>
####输出例子:
2147483647
    0
####解题思路：
+ 方法一：
```
class Solution {
public:
    int StrToInt(string str) {
       if(str.length()==0)
       {
           return 0;
       }
       int i=0;
       int sign = 1;
       int len =str.length();
       while(i<len&&str[i]==' ')
       {
           i++;
       }
       if(str[i]=='+'||str[i]=='-')
       {
           sign = (str[i++]=='-')?-1:1;
       }
       int num =0;
       for(;i<len;i++)
       {
           if(isdigit(str[i]))
            {
               if(num*10>INT_MAX)
               {
                   return 0;
               }
               if(sign==-1 && INT_MIN+num*10+str[i]-'0'>0)
               {
                   return 0;
               }
               if(sign ==1 && INT_MAX-num*10<str[i]-'0')
           		{
                   return 0;
               }
               num = num*10+str[i]-'0';
           }else
           {
               return 0;
           }
       }
       return sign*num;
    }
};
```
+ 方法二：
