#include<iostream>
#include<vector>
using namespace std;



int main()
{
	int arr1[]={5,20,5,50,50,20,60,60,20};
	int arr2[]={1,4,6,2,8,9,55,22};
	
	
	vector<int> vc1(arr1,arr1+sizeof(arr1)/sizeof(int));   // arr1 --> vector
	vector<int> vc2(arr2,arr2+sizeof(arr2)/sizeof(int));    //arr2 -->vector

	for(int i=0;i<vc1.size();i++){
        cout<<vc1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<vc2.size();i++){
        cout<<vc2[i]<<" ";
    }
    cout<<endl;

	vc1.swap(vc2);      // swap vector elements
	
	for(int i=0;i<vc1.size();i++){
        cout<<vc1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<vc2.size();i++){
        cout<<vc2[i]<<" ";
    }
	
	return 0;
}
