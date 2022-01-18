class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long p=1,ans=0;
        for(int i=0,j=0;j<n;j++)
        {
            p*=a[j];
            while(i<j && p>=k)
                p/=a[i++];
                if(p<k)
            ans+=j-i+1;
        }
        return ans;
    }
};
