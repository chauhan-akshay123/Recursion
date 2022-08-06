// In this question we are going to reverse the array using 
// 2 pointers approach
# include <iostream>
void reverse(int arr[],int start,int end){
    if(start>=end){
       return; 
    }
    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int start,end;
reverse(arr,start,end);
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}