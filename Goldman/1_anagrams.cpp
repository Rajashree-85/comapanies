class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        
        unordered_map <string,vector<string>> m;
        
        for(int i=0;i<string_list.size();i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            m[s].push_back(string_list[i]);
        }
        vector<vector<string>> res;
        for(auto i : m)
        res.push_back(i.second);
        return res;
    }
};
