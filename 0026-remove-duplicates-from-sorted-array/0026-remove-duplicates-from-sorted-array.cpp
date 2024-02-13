class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
        if(n<=1)return n;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
