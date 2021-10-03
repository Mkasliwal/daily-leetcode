/*
  Time Complexity - 92 ms 
                  - O(n)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //use this(line 8-11) to lower complexity.  (mine comes done from 140ms to 92ms)   
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
      
        int n=prices.size();
        if(n<=1)return 0;
        if(n==2){
            if(prices[0]>prices[1])
                return 0;
            else
                return prices[1]-prices[0];
        }
        vector<int>min_so_far(n),max_after_this(n),answer(n);
        
        min_so_far[0]=prices[0];      
        for(int i=1;i<n;i++){
            min_so_far[i]=min(min_so_far[i-1],prices[i]);
        }
        max_after_this[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            max_after_this[i]=max(max_after_this[i+1],prices[i]);
        }
        answer[0]=max_after_this[0]-min_so_far[0];
        for(int i=1;i<n;i++){
            answer[i]=max(answer[i-1],max_after_this[i]-min_so_far[i]);
        }
        return answer[n-1];
        
    }
};
