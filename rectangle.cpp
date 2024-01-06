#include<iostream>
using namespace std;

int main(){

    int height = 3;
    int length = 4;

    for(int i = 0; i < height; i++){
        for (int j = 0; j< length; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}