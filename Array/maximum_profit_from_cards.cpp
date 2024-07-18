class Solution {
public:
// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//        int l;
//        int r=cardPoints.size()-1;
//        int suml=0;
//        int sumr=0;
//        for(l=0;l<=k-1;l++){
//          suml+=cardPoints[l];
//        }
//        int maxsum=suml;
//        for(l=k-1;l>=0;l--){
//         suml-=cardPoints[l];
//         sumr+=cardPoints[r];
//         r--;
//         maxsum=max(maxsum,suml+sumr);
//        }

       
//         return maxsum;
//     }
// };
    int maxScore(vector<int>& arr, int k) {
      int cur =0;
      int n = arr.size();
      int sum =0;
      int ans = INT_MAX;
      int acc =0;
      k = n-k;
      cout<<k<<endl;
      for(int i =0;i<n;i++)
      {
         if(i<k)
         {
            sum += arr[i];
         }  
         else{
            ans = min(ans,sum);
            sum+= arr[i];
            sum-=arr[i-k];
            ans = min(ans,sum);
         }
         acc += arr[i];
      }
      return acc-ans;
    }
};