class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=nums.size();
        int maxi=INT_MIN,max=0;
        for(int j=0;j<n;j++){
            max=nums[j]+max;
            if(maxi<max)
                maxi=max;
            if(max<0){
                max=0;
            }
        }
        return maxi;
    }
};
