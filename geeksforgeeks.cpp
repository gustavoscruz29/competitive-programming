class Solution {
  public:
  
    bool ver(long long mid, vector<int> &s, int k){
        long long sum = 0;
        int conjuntos = 1;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] > mid) return false;
            
            if(sum + s[i] > mid){
                conjuntos++;
                sum = s[i];
            }
            else{
                sum += s[i];
            }
        }
        
        return conjuntos <= k;
    }
  
    int findPages(vector<int> &arr, int k) {

        int n = arr.size();

        if(k > n) return -1;

        long long sum = 0;

        for(auto x : arr)
            sum += x;

        long long l = 0, r = sum, ans = -1;

        while(l <= r){
            long long mid = l + (r - l) / 2;

            if(ver(mid, arr, k)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        return (int)ans;
    }
};
