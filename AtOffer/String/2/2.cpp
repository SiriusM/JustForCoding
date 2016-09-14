//使用long
class Solution {
public:
    int myAtoi(string str) {
        if(str.length()==0)
            return 0;
        int i=0;
        while(i<str.length()&&isspace(str[i]))
            i++;
        bool flag=true;
        long num=0;
        if(str[i]=='-'||str[i]=='+')
        {
            if(str[i]=='-')
            flag=false;
            i++;
        }
        for(;i<str.length();i++)
        {
            if(!isdigit(str[i]))
                return flag?num:-num;
            else
            {
                num=num*10+str[i]-'0';
                if(num>INT_MAX)
                    return flag?INT_MAX:INT_MIN;
            }
        }
        return flag?num:-num;
    }
};
//使用int
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