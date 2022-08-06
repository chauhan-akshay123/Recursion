// here we are implementing check palindrome using recursion
# include <iostream>
using namespace std;
bool check(int i,string &s){
     if(i>=s.size()/2){
        return true;
     }
     if(s[i]!=s[s.size()-i-1]){
        return false;
     }
     return check(i+1,s);
}
int main(){
string s = "MADAM";
check(0,s);
    return 0;
}