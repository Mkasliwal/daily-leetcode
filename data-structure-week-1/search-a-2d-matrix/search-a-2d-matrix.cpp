// logn*logn approach - 4ms
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int l=0;
        int h=n-1;
        int k=0;
        while(l<h && matrix[h][k]>target  ){
            int mid=l+(h-l)/2;
            if(matrix[mid][k]==target){
                return true;
            }
            else if(matrix[mid][k]>target){
               h=mid;                  
            }else{
                l=mid;
            }
            if(h-l==1){
                    if(matrix[h][k]!=target){
                        k=l;
                         break;
                    }
                    else
                        return true;
                }
        }
        int low=0,hi=m-1;
        if(matrix[h][0]<target  ){
            k=n-1;
        }
        while(low<=hi){
            int midi=low+(hi-low)/2;
            if(matrix[k][midi]==target)
                return true;
            else if(matrix[k][midi]>target)
                hi=midi-1;
            else
                low=midi+1;
        }
        return false;
    }
}; 

//another approach 8ms

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        if( matrix.size() == 0) 
		return false;
        int n=matrix.size();
        int m=matrix[0].size();
        if( !m || !n )return false;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==t)
                return true;
        else if((i+1<n && matrix[i][0]<t && t<matrix[i+1][0])||(i+1==n && matrix[i][0]<t && t<=matrix[i][m-1])){
                 for(int j=0;j<m;j++){
                     if(matrix[i][j]==t)
                         return true;
                    }
                 return false;
            }
        }
        return false;
        }
};
