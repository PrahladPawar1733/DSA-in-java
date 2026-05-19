class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(auto i:nums){
            st.insert(i);
        }
        if(st.size()==0)return 0;
        auto it = st.begin();
        int ans =1;
        int l = 1;
        while(it!=--st.end()){
            int pre = *it;
            int next = *(++it);
        if(next==pre+1){
            cout<<pre<<" "<<next<<endl;
            l++;
            ans=max(ans,l);
        }
        else{
            l=1;
        }
        }
        return ans;
    }
};
