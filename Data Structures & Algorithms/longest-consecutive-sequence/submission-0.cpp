class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int res=0, current=nums[0], strick=0, i=0;
        while(i<nums.size())
{
    if(nums[i]!=current){
        current=nums[i];
        strick=0;
    }
    while(i<nums.size() && nums[i]==current){
        i++;
    }
    strick++;
    current++;
    res=max(strick,res);
}
return res;    
}
};
