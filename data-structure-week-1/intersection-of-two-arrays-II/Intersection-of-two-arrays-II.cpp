class Solution {
public:
    vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {
         sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        int n=arr1.size();
        int m=arr2.size();
        
        int i=0;
        int j=0;
		
        vector<int> v;
        
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                if(arr1[i]>arr2[j]){
                    j++;
                }else{
                    v.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
        }
        
        return v;
    }
};
