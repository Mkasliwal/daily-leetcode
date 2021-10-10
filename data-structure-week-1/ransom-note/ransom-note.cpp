class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.length();
        int n2=magazine.length();
        int as[26]={0};
        if(n1==0)
            return true;
        if(n2==0)
            return false;
        for(int i=0;i<n1;i++)
             as[ransomNote[i]-'a']++;
        for(int i=0;i<n2;i++)
        {
            if(as[magazine[i]-'a']!=0)
            {
                as[magazine[i]-'a']--;
            }
                
        }
        for(int i=0;i<26;i++)
            if(as[i])
                return false;
        return true;
    }
};
