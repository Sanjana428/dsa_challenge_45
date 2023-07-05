#include<iostream>
#include<vector>
using namespace std;
class kadane{
	public:
    int maxSubArray(vector<int>& nums) {
     int i,sum=0,p_sum=0,a,p;
     vector<int> s_array;
     for(i=0;i<nums.size();i++){
       sum=nums[i]+sum;
       if(sum<0)
       sum=0;
       else if(p_sum<sum){
       p_sum=sum;
    }}
	return p_sum;
}
};
main(){
	int len,a,i,SUM;
	vector<int> num;
	cout<<"enter array length:-\n";
    cin>>len;
    cout<<"enter array numbers";
    for(i=0;i<len;i++){
    cin>>a;
    num.push_back(a);
    }
    kadane A;
    SUM=A.maxSubArray(num);
    cout<<"\nmax. sum of subarray is-:"<<SUM;
}