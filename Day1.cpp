#include <bits/stdc++.h>

using namespace std;

class Sol
{
public:
    int findOnce(int arr[], int n)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ arr[i];
        }
        return ans;
    }
};

int main()
{
    int arr[10];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Sol s;
    cout<<s.findOnce(arr,n);

    
    return 0;
}