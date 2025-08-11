// Last updated: 8/11/2025, 9:14:57 PM
class Solution {
public:
int MOD= 1e9+7;
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int ways=0;
        for(int i=0;i<n;i++){
            int tar= target- arr[i];
            int l=i+1;
            int r=n-1;
            while(l<r){
                long long sum=arr[l]+arr[r];
                if(sum==tar){
                    if(arr[l]!=arr[r]){
                        long long leftCount=1;
                        long long rightCount=1;
                        while(l+1<r&&arr[l]==arr[l+1]){
                            leftCount++;
                            l++;
                        }
                        while(l<r-1&&arr[r]==arr[r-1]){
                            rightCount++;
                            r--;
                        }
                        ways=(ways+(leftCount*rightCount))%MOD;
                        l++;
                        r--;

                    }
                    else if(arr[l]==arr[r]){
                        long long m = r - l + 1;
                        ways += m * (m - 1) / 2;
                        ways %= MOD;
                        break;
                    }
                }
                else if(sum<tar) l++;
                else r--;
            }
        }
        return ways%MOD;
    }
};