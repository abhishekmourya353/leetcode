class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
      vector<long long>res(n,0);
        res[0]=2*nums[0];
        int maxim=nums[0];
        for(int i=1;i<n;i++){
            maxim=max(maxim,nums[i]);
            res[i]=maxim+res[i-1]+nums[i];
        }
        return res;
    }
};