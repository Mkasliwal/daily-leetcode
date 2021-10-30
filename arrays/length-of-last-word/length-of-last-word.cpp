class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool isCharExists = false;
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] != ' ') {
                isCharExists = true;
                count++;
            }
            if(s[i] == ' ' && isCharExists) {
                break;
            }
        }
        return count;
    }
};

