// POSITION_OF_MTH_ITEM
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // if(N==1)
        // {
        //     return 1;
        // }
        // int sol=M%N+K-1;
        // if(sol==N)
        // {
        //     return sol;
        // }
        // else
        // {
        //     return sol%N;
        // }
        
        return (M+K-2)%N+1;
        // code here
    }
};

// TIME COMPLEXITY :O(1)
// SPACE COMPLEXITY :O(1)