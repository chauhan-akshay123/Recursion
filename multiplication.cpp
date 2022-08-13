/*
Multiplication (Recursive)
Send Feedback
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N
Output format :
M x N
Constraints :
0 <= M <= 1000
0 <= N <= 1000
Sample Input 1 :
3 
5
Sample Output 1 :
15
Sample Input 2 :
4 
0
Sample Output 2 :
0
*/
# include <iostream>
using namespace std;
int mul(int m,int n){
if(n==1){
    return m;
}
if(n==0){
    return 0;
}
return m+mul(m,n-1);
}
int main(){
int m,n; std::cin>>m>>n;
cout<<mul(m,n)<<"\n";
    return 0;
}
