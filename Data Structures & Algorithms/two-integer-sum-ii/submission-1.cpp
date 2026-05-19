class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int st =0,en=num.size()-1;
        while(st<en){
            int sum = num[st]+num[en];
            if(sum==t){
                return {st+1,en+1};
            }
            else if(sum>t){
                en--;
            }
            else{
                st++;
            }
        }
        return {};
    }
};
