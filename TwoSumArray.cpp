#include<iostream>
using namespace std;
void twoSum(int nums[],int n,int target){
      int count=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
           cout<<"Output : ["<<i<<","<<j<<"].";  
         count++;  
        }     
    }      
}
      if(count==0){
        cout<<"Not available";  
      }        

}
int main (){
int n,target;
cout<<"Enter size : ";
cin>>n;
int nums[n];
cout<<"Enter target : ";
cin>>target;
cout<<"Enter element : ";
for(int i=0;i<n;i++){
    cin>>nums[i];
}
twoSum(nums,n,target);
    return 0;
}