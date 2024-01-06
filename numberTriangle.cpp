#include<iostream>
using namespace std;

int main(){

    int height = 8;

    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<k;
        }
        for(int l = i-1; l >= 1; l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}