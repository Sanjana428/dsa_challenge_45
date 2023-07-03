#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
	public:
	int p;
    vector<int>sortedsquares(vector<int>& nums) {
      int i,a,N;
      N=nums.size();
      vector<int> result;
      for(i=0;i<N;i++){
      	a=nums[i]*nums[i];
      	result.push_back(a);
	  }
	  sort(result.begin(),result.end());
	  return result;
    }
};
main(){
	int len,a,p,i;
	vector<int> num;
	vector<int> fresult;
	cout<<"enter array length:\n";
    cin>>len;
    cout<<"enter array numbers";
    for(i=0;i<len;i++){
    cin>>a;
    num.push_back(a);
    }
    solution A;
    fresult=A.sortedsquares(num);
    for (auto& p:fresult){
    	cout<<p<<" ";
	}
    }
	

