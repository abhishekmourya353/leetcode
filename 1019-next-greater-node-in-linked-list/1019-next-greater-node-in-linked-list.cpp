
class Solution {
public:
     ListNode* reverseList(ListNode* head) {
    if (!head || !head->next)
      return head;

    ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
  }
    vector<int> nextLargerNodes(ListNode* head) {
         
         ListNode*temp;
         temp=reverseList(head);
        
          ListNode*temp1=temp;
        int n=0;
        while(temp1){
            n=n+1;
            temp1=temp1->next;
        }
        
        vector<int> nge(n,0);
        if(temp==NULL||temp->next==NULL)return {0};
        
    stack<int>st;
   nge[n-1]=0;
        st.push(temp->val);
        temp=temp->next;
   st.push(temp->val);
        int i=n-2;
   while(temp){
    while(st.size()>0 && st.top()<=temp->val)
     st.pop(); 
     if(st.size()==0)nge[i]=0;
     else nge[i]=st.top();
     st.push(temp->val);
       i--;
       temp=temp->next;
   }  
        return nge;
    }
};






// int main(){
//     int n=8;
//    int arr[n]={3,1,2,7,4,6,2,3};
//     int nge[n];
//     stack<int>st;
//    nge[n-1]=-1;
//    st.push(arr[n-1]);
//    for(int i=n-2;i>=0;i--){
//     while(st.size()>0 && st.top()<=arr[i])
//      st.pop(); 
//      if(st.size()==0)nge[i]=-1;
//      else nge[i]=st.top();
//      st.push(arr[i]);
//    }
//     for(int i=0;i<n;i++)
//     cout<<nge[i]<<" ";
//    return 0;
// }