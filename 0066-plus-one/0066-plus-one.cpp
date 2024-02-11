class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
            vector<int>arr;
       // cout<<n;
        bool flag=true;
     for(int i=0;i<n;i++){
            if(digits[i]<9)flag=false;
            }
        cout<<flag;
        if(digits[n-1]!=9){
            digits[n-1]=digits[n-1]+1;
                        return  digits;
        }
        else{
            int sum=1;
            for(int i=n-1;i>=0;i--){
                sum=digits[i]+sum;
              //  cout<<sum;
                arr.push_back(sum%10);
                sum=sum/10;
            }
           if(flag)
            arr.push_back(sum);

        }
        reverse(arr.begin(),arr.end());
        
                      return arr ;
    }
};