class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
         vector<int>nge(n);
    stack<int>st;
   nge[n-1]=0;
   st.push(prices[n-1]);
   for(int i=n-2;i>=0;i--){
    while(st.size()>0 && st.top()>prices[i])
     st.pop(); 
     if(st.size()==0)nge[i]=0;
     else nge[i]=st.top();
     st.push(prices[i]);
   }
        for(int i=0;i<n;i++)cout<<nge[i]<<" ";
        cout<<endl;
        vector<int>ans; 
        for(int i=0;i<n;i++)ans.push_back(prices[i]-nge[i]);
        return ans;
//    
    }
};





// int n=8;
//    int arr[n]={3,1,2,7,4,6,2,3};
//     int nge[n];
//     stack<int>st;
//    nge[n-1]=-1;
//    st.push(arr[n-1]);
//    for(int i=n-2;i>=0;i--){
//     while(st.size()>0 && st.top()>arr[i])
//      st.pop(); 
//      if(st.size()==0)nge[i]=-1;
//      else nge[i]=st.top();
//      st.push(arr[i]);
//    }
//     for(int i=0;i<n;i++)
//     cout<<nge[i]<<" ";