class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
    vector<int>ans;
    for(auto it : nums)
    {
        mp[it]++;
    }
    vector<pair<int,int>>count;
    for(auto it : mp)
    {
        count.push_back({it.second, it.first});
    }
    sort(count.begin(),count.end(),greater<pair<int,int>>());
    for(int i=0; i<k; i++)
    {
        ans.push_back(count[i].second);
    }
    return ans;
    }
};
