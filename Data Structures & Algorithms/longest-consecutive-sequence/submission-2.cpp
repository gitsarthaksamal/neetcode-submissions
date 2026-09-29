class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> num(nums.begin(), nums.end());
       int longest=0;
       for(auto x: num){
        if(num.find(x-1)==num.end()){
            int len=1;
            while(num.find(x+len)!=num.end()){
                len++;
            }
            longest=max(len,longest);
        }
       }
       return longest;
    }
};
