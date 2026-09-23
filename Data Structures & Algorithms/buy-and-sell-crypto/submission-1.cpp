class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpri=INT_MAX;
        int maxi=0;
        for(auto price: prices){
            minpri= min(price,minpri);
            maxi=max(maxi,price-minpri);
        }
        return maxi;
    }
};
