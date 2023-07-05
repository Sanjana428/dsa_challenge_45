#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int i,pod=1,p_pod=0;
    for(i=0;i<nums.size();i++){
       pod=nums[i]*pod;
       if(pod<0)
       pod=0;
       else if(p_pod<pod){
       p_pod=pod;
    }
}
return p_pod;
    }
};
main(){
	int len,a,i,POD;
	vector<int> num;
	cout<<"enter array length:-\n";
    cin>>len;
    cout<<"enter array numbers";
    for(i=0;i<len;i++){
    cin>>a;
    num.push_back(a);
    }
    Solution A;
    POD=A.maxProduct(num);
    cout<<"\nmax. product of subarray is-:"<<POD;
}