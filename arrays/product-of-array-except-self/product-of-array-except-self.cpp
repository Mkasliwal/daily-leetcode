//16ms
//fater than 97.47%
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0;
        int ans=1;
        vector<int>an;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                zero++;
            else{
                ans=ans*nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(zero>1)
                an.push_back(0);
            else if(zero==1 && nums[i]==0)
                an.push_back(ans);
            else if(zero==1)
                an.push_back(0);
            else 
                an.push_back(ans/nums[i]);
        }
        return an;
    }
};
