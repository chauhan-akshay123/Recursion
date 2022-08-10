/*
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7    
*/
#include <iostream>
using namespace std;
int arraySum(int a[],int n){
if(n==0){
   return 0;
}  
int prevSum = arraySum(a+1,n-1);
return a[0]+prevSum;
}
 int main(){
   int n;std::cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
      std::cin>>arr[i];
   }  
   std::cout<<arraySum(arr,n)<<"\n";
    return 0;
 }