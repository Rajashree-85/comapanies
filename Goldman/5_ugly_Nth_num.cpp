class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if(n<=5)
	    return n;
	    
	    set<ull> s;
	    s.insert(1);
	     n--;
	  while(n--)
	    {
	        auto ans=s.begin();
	       ull x=*ans;
	        s.erase(ans);
	        
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    
	    }
	    return *s.begin();
	}
};
