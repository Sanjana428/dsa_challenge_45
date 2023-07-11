#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
main(){
	int len,a,i,NO;
	vector<int> num;
	cout<<"enter array length:-\n";
    cin>>len;
    cout<<"enter array numbers";
    for(i=0;i<len;i++){
    cin>>a;
    num.push_back(a);
    }
    Solution A;
    NO=A.majorityElement(num);
    cout<<"\nmajority element is-:"<<NO;
}