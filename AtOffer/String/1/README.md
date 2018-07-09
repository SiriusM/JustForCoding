### 1.替换空格 ###
>
#### 题目描述
请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
>
#### 解题思路
+  方法一：
```
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
```
