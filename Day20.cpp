class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0;
        int cnt=0;
        for(int i=0;i<s.size(); i++){
           if (s[i] =='R'){
               cnt++;
           }
           else{
               cnt--;
           }
           if (cnt==0){
               res++;
           }
        }
     return res;
    }
 };