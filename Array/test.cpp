#include <bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl
#define MOD 1000000007
// const int maxsize = 1e5;
// int arr[maxsize+1];
#define test     \
    int monu;    \
    cin >> monu; \
    while (monu--)
using namespace std;
int getbit(vector<int>&arr,int p)
{   //p = 1
	// a = 1,3,5,7
	int i = p;
	int ans = 0;
	//cout<<p<<endl;
	while(i<=arr.size())
	{
		int cur =0;

			while(i<=arr.size() && cur<p)
			{
					ans ^=arr[i-1];
					//cout<<i<<" ";
				//cout<<i<<" ";
				i++;
				cur++;
			}
			//cout<<endl;
		i+= p;
	}
	//cout<<endl;
	return ans;  
}
signed main()
{
	int n;//cout<<"Enter the size of code:";
	cin>>n;
	vector<int> arr(n,0);
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];	
	}
	int p = 1;
	int ans =0;
	while(p<n)
	{
		int cur = getbit(arr,p);
		ans += (cur*p);
		//cout<<cur<<" "<<p<<endl;
		p = p*2;
	}
	cout<<ans<<endl;
	for(int i =0;i<arr.size();i++)
	{
		if(i==ans-1)
		{
			cout<<(arr[i]^1)<<" ";
		}
		else
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// int p1 = arr[2]^arr[4]^arr[6];
	// int p2 = arr[2]^arr[5]^arr[6];
	// int p4 = arr[4]^arr[5]^arr[6];
	// int cur = (4*p4+2*p2+1*p1);
	// cout<<(4*p4+2*p2+1*p1)<<endl;
	// if(cur>0)
	// {
	// 	arr[cur-1] = arr[cur-1]^1;
	// }
	// for(auto i:arr) cout<<i<<" ";
	// 	cout<<endl;
    // dusro ka code copy karne se ghar nahi chalta bhai
}