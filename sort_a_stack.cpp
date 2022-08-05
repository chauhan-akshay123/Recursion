# include <iostream>
# include <stack>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.empty()||s.top()<=temp){
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}
void sort(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
}
int main(){


    return 0;
}