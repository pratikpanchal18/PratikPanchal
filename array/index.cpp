#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int num;
    cin>>num;
    int diff;
    cin>>diff;
    int count;
    for(int i=0;i<n;i++){
        if(num-array[i]<=2){
            count++;
        }
    }
    cout<<count;
}