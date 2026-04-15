class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto &i : nums){
          mp[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it = mp.begin();it!=mp.end();it++){
            if(pq.size()<k){
                pq.push({-it->second,it->first});
            }
            else{
                if(it->second>-pq.top().first){
                    pq.pop();
                    pq.push({-it->second,it->first});
                }
            }
        }
        vector<int> ans;
        while(!pq.empty()){
           ans.push_back(pq.top().second);
           pq.pop();
        }
        return ans;
    }
};
