class Solution {
public:
    int firstUniqChar(string s) {
        int i;
        int n=s.length();
        int a[26]={0};
            
        for( i=0;i<n;i++)
            a[s[i]-'a']++;
        for( i=0;i<n;i++)
            if(a[s[i]-'a']==1)
            break;
        if(i==n)
            return -1;
        return i;
    }
};
