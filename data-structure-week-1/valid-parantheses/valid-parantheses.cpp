class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        
        if(s[0] == ')' || s[0] == '}' || s[0] == ']') {
            return false;
        }

        for(int i=0; i<s.size(); i++) {
            if( s[i] == '{' || s[i] == '(' || s[i] == '[' ) {
                stk.push(s[i]);
                continue;
            }
            
            if(stk.empty()) {
                return false;
            }
            
            switch(s[i]) {
                case ')':
                    if( stk.top() == '[' || stk.top() == '{' ) {
                        return false;
                    }
                    stk.pop();
                    break;

                case '}':
                    if( stk.top() == '[' || stk.top() == '(' ) {
                        return false;
                    }
                    stk.pop();
                    break;
                
                case ']':
                    if( stk.top() == '{' || stk.top() == '(' ) {
                        return false;
                    }
                    stk.pop();
                    break;
            }
        }
        return stk.empty();
    }
};

