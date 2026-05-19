class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int st =0,en=num.size()-1;
        while(st<en){
            if(num[st]+num[en]==t){
                return {st+1,en+1};
            }
            else if(num[st]+num[en]>t){
                en--;
            }
            else{
                st++;
            }
        }
        return {-1,-1};
    }
};
