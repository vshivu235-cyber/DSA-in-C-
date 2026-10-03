#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,5,6,7,9};
    int swap;
    for(int i=0;i<3;i++){
       swap= arr[i];
       arr[i]=arr[5-i];
       arr[5-i]=swap;
    }
    for(int i= 0;i<6;i++){
    cout<<arr[i];
    }
}