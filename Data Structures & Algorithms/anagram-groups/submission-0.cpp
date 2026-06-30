#include <algorithm>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>>m;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string x=strs[i];
            sort(x.begin(),x.end());
            m[x].push_back(i);
        }
        for(auto it :m){
            vector<string>v;
            for(int i=0;i<it.second.size();i++){
                v.push_back(strs[it.second[i]]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
