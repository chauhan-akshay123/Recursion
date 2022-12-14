/*
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
indexes where x is present in the array (separated by space)
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/

//--SOLUTION--

# include <iostream>
using namespace std;
int allIndexes(int input[],int size,int x,int output[]){
    if(size==0){
        return 0;
    }
    //getting the recursive answer
    int smallAns = allIndexes(input+1,size-1,x,output);
    //if the element at index 0 is equal
    //to x then add 1 to the array values
    //and shift them right by 1 step
     if (input[0] == x) { 
        for (int i = smallAns - 1; i >= 0; i--) { 
            output[i + 1] = output[i] + 1; 
        } 
        //put the start index inf front
        //of the array
        output[0]=0;
        smallAns++;
}
else{
    //if the element at index 0 is not equal
    //to x then add 1 to the array values
    for(int i=smallAns-1; i>=0; i--){
        output[i]=output[i]+1;
    }
}
return smallAns;
}
int main(){
int n;std::cin>>n;
int* input = new int[n];
for(int i=0; i<n; i++){
    std::cin>>input[i];
}    
int x;std::cin>>x;
int* output = new int[n];
int size=allIndexes(input,n,x,output);
for(int i=0; i<size; i++){
    cout<<output[i]<<" ";
}
delete [] input;
delete [] output;
    
    return 0;
}