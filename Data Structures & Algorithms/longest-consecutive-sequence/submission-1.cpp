class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int curr=nums[0], res=0, strick=0, i=0;
        while(i<nums.size()){
            if(curr!=nums[i]){
                curr=nums[i];
                strick=0;
            }
            while(i<nums.size() && nums[i]==curr){
                i++;
            }
            strick++;
            curr++;
            res=max(res, strick);
        }
        return res;
    }
};
