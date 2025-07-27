//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int row=A.size(),col=A[0].size()-1;
        int r=0,c=col;
        int count=0;
        while(r<row && c>=0){
            if(A[r][c]==0){
                r++;
                count += c+1;
               
            }else{
                c--;
            }
        }
        return count;
    }
};
