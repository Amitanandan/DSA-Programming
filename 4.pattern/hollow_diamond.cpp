#include<iostream>
using namespace std;
    /*5

        *
      *   *
    *       *
  *           *
*               *
*               *
  *           *
    *       *
      *   *
        **/

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j =1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j =1;j<=2*i-1;j++){
            if(j==1 || j==2*i -1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i = n;i >=1 ;i--){
        for(int j =0 ;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=1 ; j<=2*i -1 ;j++){
            if(j ==1 || j==2*i -1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}