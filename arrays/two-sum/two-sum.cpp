//complexity - O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++) mp[nums[i]] = i;
        for(int i=0;i<n;i++){
            int d = target - nums[i];
            int index = mp[d];
            if(nums[index]==d and index>i){
               ans.push_back(i);
                ans.push_back(index);
                break;
            }
        }
        return ans;
    }
};
