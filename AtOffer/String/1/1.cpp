//length为牛客系统规定字符串输出的最大长度，固定为一个常数
class Solution {
public:
	void replaceSpace(char *str,int length) {
		int count =0;
        for(int i =0;i<length;i++)
        {
            if(str[i]==' ')
             {
                count++;
             }
        }
        length--;
        int len = length +2*count;
        while(len>=0)
        {
            if(str[length]==' ')
            {
                str[len]='0';
                str[--len]='2';
                str[--len]='%';
            }
            else{
                str[len]=str[length];
            }
            length--;
            len--;
        }
	}
};