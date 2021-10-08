class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==0);
        else if(numRows==1){
            vector<int> temp(1,1);
            ans.push_back(temp);
        }
        else{
            vector<int> temp(1,1);
            ans.push_back(temp);
            for(int i=1;i<numRows;i++){
                vector<int> temp(i+1,0);
                temp[0]=1;
                for(int j=1;j<i;j++){
                    temp[j]=ans[i-1][j]+ans[i-1][j-1];
                }
                temp[i]=1;
                ans.push_back(temp);
            } 
            
        }    
       return ans; 
    }
};
