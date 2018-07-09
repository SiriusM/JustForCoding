class Solution {
public:
    bool match(char* s, char* p)
    {
    	if(!*p) return !*s;
    	if(!*s) return *(p+1)=='*' && match(s, p+2);
    	if(*(p+1)=='*')
        	return match(s, p+2) || ((*s==*p || *p=='.') && match(s+1, p));
    	else
        	return (*s==*p || *p=='.') && match(s+1, p+1);
    }

};