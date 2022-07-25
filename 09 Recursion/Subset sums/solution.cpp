#include<bits/stdc++.h>
using namespace std;
vector<int> res;
void f(int i,int sum,vector<int> &arr){
    if(i==arr.size()){
        res.push_back(sum);
        return;
        }
    f(i+1,sum+arr[i],arr);  
    f(i+1,sum,arr);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    f(0,0,arr);
    return res;
}
int main(){

    return 0;
}