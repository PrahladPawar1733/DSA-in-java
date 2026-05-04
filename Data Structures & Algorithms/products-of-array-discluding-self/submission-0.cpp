class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int mul=1, ct=0;
     for(int i: nums){
        if(i==0)ct++;
        else mul*=i;
     }
     for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            ct--;
            if(ct!=0){
                nums[i]=0;
            }
            else{
                nums[i]=mul;
            }
            ct++;
        }
        else{
            if(ct==0){
                nums[i]=mul/nums[i];
            }
            else{
                nums[i]=0;
            }
        }
     }
     return nums;
    }
};
