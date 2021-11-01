//0ms
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        if(nums.size()==0)return 0;
        v.push_back(nums[0]);
        int k=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==k){}
            else{
                count++;
                k=nums[i];
                v.push_back(nums[i]);   
            }    
        }
        
        nums=v; 
        return count;
    }
};
