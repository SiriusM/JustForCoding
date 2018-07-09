class Solution {
public:
   bool isNumeric(char* str)
    {
      if(str==nullptr||str[0]=='\0')
        return false;
      int i=0;
      if(!isdigit(str[i]))
      {
            if(str[i]=='+'||str[i]=='-')
                i++;
            else
                return false;
      }
      int flag1=false;
      int flag2=false;
      while(str[i]!='\0')
      {
            if(!isdigit(str[i]))
            {
                if(str[i]=='.'||str[i]=='E'||str[i]=='e')
                {
                    
                    if(!flag1&&str[i]=='.')
                    {
                        i++;
                        flag1=true;
                    }

                    else if(!flag2&&(str[i]=='E'||str[i]=='e'))
                    {
                        if(str[i+1]=='\0')
                        return false;
                        flag1=true;
                        flag2=true;
                        if(str[i+1]=='+'||str[i+1]=='-')
                            i++;
                        i++;
                    }
                    else
                        return false;
                }
                else
                    return false;
            }
            else
                i++;
      }
      return true;
    }

};