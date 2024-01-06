#include<iostream>
using namespace std;

int main(){

    int n = 7;
    int m = 9;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i%2 != 0){
                if(j%2 == 0){
                    cout<<"2";
                }else{
                    cout<<"1";
                }
            }else{
                if(j%2 != 0){
                    cout<<"2";
                }else{
                    cout<<"1";
                }
            }
        }     
        cout<<endl;
    }

    return 0;
}