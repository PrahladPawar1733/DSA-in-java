class Solution {
public:
    bool fin(vector<int>& num, int st, int t){
    int en = num.size()-1;
    while(st<=en){
        int mid = st + (en-st)/2;
        if(num[mid]==t){
            return true;
        }
        else if(num[mid]<t){
            st=mid+1;
        }
        else{
            en=mid-1;
        }
    }
    return false;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                if(fin(nums,j+1,-(nums[i]+nums[j]))){
                    st.insert({nums[i],nums[j],-(nums[i]+nums[j])});
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i = st.begin();i!=st.end();i++){
        ans.push_back(*i);
        }
        return ans;
    }
};
