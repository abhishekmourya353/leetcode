class Solution {
public:
     int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
    int nge[n];
    nge[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.size()==0)nge[i]=n;
        else nge[i]=st.top();
         st.push(i);
    }
         int pge[n];
        stack<int>gt;
    pge[0]=-1;
    gt.push(0);
    for(int i=1;i<n;i++){
        while(gt.size()>0 && arr[gt.top()]>=arr[i]){
            gt.pop();
        }
        if(gt.size()==0)pge[i]=-1;
        else pge[i]=gt.top();
         gt.push(i);
    }
        int maxarea=0;
            for(int i=0;i<n;i++){
                int hight=arr[i];
                int w=nge[i]-pge[i]-1;
                int area=hight*w;
                maxarea=max(maxarea,area);
            }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>row(m,0);
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1')row[j]+=1;
                else row[j]=0;
            }
            mx=max(mx,largestRectangleArea(row));
        }
        return mx;
    }
};