#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n,int key)
{
  int s=0,e=n-1,ans=-1;
  int mid = s + (e-s)/2;
  
  while(s<=e){
  
   if(arr[mid]==key){
     ans = mid;
     e = mid-1;
     }
     else if(key>arr[mid]){
       s = mid+1;
       }
       
       else{
       e = mid-1;
       }
    mid = s + (e-s)/2;
  }
    return ans;
    
}
 
 
 int lastOccurance(int arr[],int n,int key)
{
  int s=0,e=n-1,ans=-1;
  int mid = s + (e-s)/2;
  
  while(s<=e){
  
   if(arr[mid]==key){
     ans = mid;
     s = mid+1;
     }
     else if(key>arr[mid]){
       s = mid+1;
       }
       
       else{
       e = mid-1;
       }
    mid = s + (e-s)/2;
  }
    return ans;
    
}


int main(){

int arr[7]={1,2,3,3,3,3,4};
int key=3;
 int firstIndex = firstOccurance(arr,7,key);
 int lastIndex  = lastOccurance(arr,7,key);
 int ans = (lastIndex-firstIndex) + 1;
 
 cout<<ans<<endl;
 
 return 0;
 
 }
