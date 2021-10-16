#include<iostream>
using namespace std;
int main(){
    int test,stt=0;
    cin>>test;
    while(test--){
        //input
        int n;//so tan cay thong
        cin>>n;

        //ve cay thong
        int h=(n+1)*(n+2)/2+3;//chieu cao cua cay
        int d=3+n*2;//chieu rong cua cay
        int a[h][d]={};//ma tran de ve cay thong
        int g=n+1;//diem o giua
        a[0][g]=1;//ve dinh cua cay
        for(int i=0;i<n;i++){//ve tan cua cay
            for(int j=0;j<i+1;j++){
                a[i*(i+3)/2+j+1][g-1-j]=1;
                a[i*(i+3)/2+j+1][g+1+j]=1;
            }
            for(int j=0;j<i+2;j++){
                a[i*(i+3)/2+i+2][g-1-j]=1;
                a[i*(i+3)/2+i+2][g+1+j]=1;
            }
        }
        //ve goc cay thoong
        a[(n+1)*(n+2)/2][g-1]=1;
        a[(n+1)*(n+2)/2][g+1]=1;
        a[(n+1)*(n+2)/2+1][g-1]=1;
        a[(n+1)*(n+2)/2+1][g+1]=1;
        a[(n+1)*(n+2)/2+2][g]=1;
        a[(n+1)*(n+2)/2+2][g-1]=1;
        a[(n+1)*(n+2)/2+2][g+1]=1;

        //output
        stt++;
        cout<<"Test "<<stt<<":"<<endl;
        for(int i=0;i<h;i++){
            for(int j=0;j<d;j++){
                if(a[i][j]==1)cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
}
