class Solution {
public:
    vector<int> findAnagrams(string a, string p) {
          int i=0,j=0;
        vector<int> res;
        unordered_map<char, int> m;
        unordered_map<char, int> m2;
        
        if(a.size() < p.size()) return res;
        
        for(auto &c: p) m2[c]++;
        
        while(j<a.size()){
            if(m2.find(a[j]) != m2.end()) m[a[j]]++;
            if(j-i+1 < p.size()) j++;
            else if(j-i+1 == p.size()){
                //Get Result from calculation
                if(m == m2) res.push_back(i);
                
                //Remove i from calculation
                if(m.find(a[i]) != m.end()) m[a[i]]--;
                i++;
                j++;
            }
        }
        return res;
    }
};
