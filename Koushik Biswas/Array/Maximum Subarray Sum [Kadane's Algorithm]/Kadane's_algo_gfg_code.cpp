class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
//Time complexity: O(N) space complexity: O(1)

//Source: https://www.youtube.com/watch?v=w_KEocd__20&ab_channel=takeUforward
