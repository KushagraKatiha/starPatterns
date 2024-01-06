#include<iostream>
using namespace std;

int main(){

    int height = 4;

    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height-i; j++){
            cout<<" ";
        }
        for(int j = 1; j <= i*2-1; j++){
            if(j == 1 || j == i*2-1){
                cout<<i;
            }else if(i == height){
                cout<<i;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
} 