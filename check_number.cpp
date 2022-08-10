/*
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false'
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
Sample Input 2 :
3
9 8 10
2
Sample Output 2 :
false
*/
# include <iostream>
using namespace std;
bool check(int a[],int size,int num){
     if(size==0){
         return false;
     }
     if(a[0]==num){
         return true;
     }
     else{
         check(a+1,size-1,num);
     }
}
int main(){
    int n;std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int x;
    std::cin>>x;
    if(check(arr,n,x)){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
    return 0;
}