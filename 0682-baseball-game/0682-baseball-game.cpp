class Solution {
public:
    
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(operations[i].size()>1 or (operations[i].size()==1 and operations[i][0]>='0' and operations[i][0]<='9'))st.push(stoi(operations[i]));
            else if(operations[i]=="C")st.pop();
            else if(operations[i]=="D")st.push(2*st.top());
            else{
                int v1=st.top();
                st.pop();
                int sum=v1+st.top();
                st.push(v1);
                st.push(sum);
            }
        
        
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};