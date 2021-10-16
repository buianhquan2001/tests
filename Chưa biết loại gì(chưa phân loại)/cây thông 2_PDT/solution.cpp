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
        int h=n*4+3;//chieu cao cua cay
        int d=5+n*2;//chieu rong cua cay
        int a[h][d]={};//ma tran de ve cay thong
        int g=n+2;//diem o giua
        for(int i=0;i<n;i++){//ve tan cua cay
            a[i*4][g+i]=1;
            a[i*4+1][g+i+1]=1;
            a[i*4+2][g+i+2]=1;
            a[i*4+3][g+i+3]=1;
            a[i*4+3][g+i+2]=1;
            a[i*4+3][g+i+1]=1;
            //
            a[i*4][g-i]=1;
            a[i*4+1][g-i-1]=1;
            a[i*4+2][g-i-2]=1;
            a[i*4+3][g-i-3]=1;
            a[i*4+3][g-i-2]=1;
            a[i*4+3][g-i-1]=1;
        }
        for(int i=0;i<n-1;i++){
            a[h-4][g-1-i]=1;
            a[h-4][g+1+i]=1;
        }
        //ve goc cay thong
        a[h-3][g-1]=1;
        a[h-3][g+1]=1;
        a[h-2][g-1]=1;
        a[h-2][g+1]=1;
        a[h-1][g]=1;
        a[h-1][g-1]=1;
        a[h-1][g+1]=1;
        //ve tuyet
        for(int i=0;i<h;i++){
            int l=0,r=d-1;
            while(a[i][l]!=1)l++;
            while(a[i][r]!=1)r--;
            for(int j=l+1;j<r;j++){
                if(a[i][j]==0)a[i][j]=2;
            }
        }

        //output
        stt++;
        cout<<"Test "<<stt<<":"<<endl;
        for(int i=0;i<h;i++){
            for(int j=0;j<d;j++){
                if(a[i][j]==1)cout<<"*";
                else if(a[i][j]==2) cout<<" ";
                else cout<<".";
            }
            cout<<endl;
        }
    }
}
