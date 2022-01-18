class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long sum=0;
        for(long long int i=1;i<=N;i++)
        sum+=i*i;
        return sum;
    }
};
