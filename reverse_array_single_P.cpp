// we are going to reverse but using only single pointer
# include <iostream>
void reverse(int arr[],int i,int n){
if(i>=n/2){
    return;
}
swap(arr[i],arr[n-i-1]);
reverse(arr,i+1,n);
}
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
reverse(arr,0,5);
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}