class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>map;
        vector<vector<string>> res;
        for(int i=0;i<strs.size();i++)
        {
            string before_sorted=strs[i];
            sort(strs[i].begin(),strs[i].end());
            map[strs[i]].push_back(before_sorted);

            //or
            
            //string sorted=strs[i];
            //sort(sorted.begin(),sorted.end());
            //map[sorted].push_back(strs[i]);
        }
        for(auto& i : map)
        {
            res.push_back(i.second);
        }
        return res;
    }
};
