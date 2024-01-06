#include<iostream>
using namespace std;

int main(){

    int height = 4;

    for(int i = 0; i < height; i++){
        for(int j = height-1; j >= i; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}