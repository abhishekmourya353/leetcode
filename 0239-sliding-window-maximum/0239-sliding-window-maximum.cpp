class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        stack<int>st;
         int n=nums.size();
        
        vector<int>ans;
    int ngi[n];
    ngi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && nums[st.top()]<=nums[i]){
            st.pop();
        }
        if(st.size()==0)ngi[i]=n;
        else ngi[i]=st.top();
         st.push(i);
    }
       
        int j=0;
        for(int i=0;i<n-k+1;i++){
            if(j<i)j=i;
            int mx=nums[j];
            while(j<i+k){
                mx=nums[j];
                if(ngi[j]>=i+k)break;
                j=ngi[j];
            }
            ans.push_back(mx);
        }
        return ans;
    }
};