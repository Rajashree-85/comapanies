class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1=str1.length(),l2=str2.length(),j;
        if(l1<l2)
            return gcdOfStrings(str2,str1);
        
        string s="";
        for(int i=0;i<l2;i++)
        {
            string ans=str2.substr(0,i+1);
            int len=ans.length();
            for( j=0;j<l2;j+=len)
            {
                if(ans!=str2.substr(j,len))
                break;
            }
            if(j==l2)
            {
                 for( j=0;j<l1;j+=len)
                if(ans!=str1.substr(j,len))
                break;
                if(j==l1)
                    s=ans;
            }
        }
        return s;
    }
};
