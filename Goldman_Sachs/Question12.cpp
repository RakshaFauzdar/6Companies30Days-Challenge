// SQUARE_N*N_CHESSBOARD

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        long ans=0;
        while(N>=1)
        {
            ans+=N*N;
            N--;
        }
        return ans;
        // code here
    }
};
