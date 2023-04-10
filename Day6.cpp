class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        int temp;
        int n = arr.size();
        for (int i=n-1;i>=0;i--){
            temp = arr[i];
            arr[i]=maxi;
            maxi=max(maxi,temp);
        }
        return arr;
    }
};