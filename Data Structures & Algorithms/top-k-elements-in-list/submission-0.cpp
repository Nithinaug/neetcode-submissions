class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>map;
       for(int i : nums){
          map[i]++;
       }
    vector<pair<int,int>>sorted;
        for(auto it :map){
       sorted.push_back({it.second,it.first});
        }
    sort(sorted.rbegin(),sorted.rend());
    vector<int>sol;
    for(int i=0;i<k;i++){
        sol.push_back(sorted[i].second);
    }
    return sol;
    }
};