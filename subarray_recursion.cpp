# include <iostream>
using namespace std;
void solve(int arr[],int size,int s){
     if(s==size){
        return; 
     }
     for(int i=s; i<size; i++){
         cout<<arr[i];        
     }
     solve(arr,3,s+1);
}

int main(){
int arr[] = {4,6,8};
int size = 3;


    return 0;
}