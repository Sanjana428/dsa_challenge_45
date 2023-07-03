#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
	public:
	int p;
    void rotate(vector<int>& nums, int k) {
      reverse(nums.begin(),nums.end());
      reverse(nums.begin(),nums.begin()+k);
      reverse(nums.begin()+k,nums.end());  
      for(auto &p: nums){
      	cout<<p<<" ";
	  }
    }
};
main(){
	int len,k,a,i;
	vector<int> num;
	cout<<"enter array length and rotating no:\n";
    cin>>len>>k;
    cout<<"enter array numbers";
    for(i=0;i<len;i++){
    cin>>a;
    num.push_back(a);
    }
    solution A;
    A.rotate(num,k);
	
}
