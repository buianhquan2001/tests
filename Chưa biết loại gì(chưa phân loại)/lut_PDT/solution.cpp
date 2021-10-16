#include <iostream>
using namespace std;

int d, h;
string s[100];
int nuoc;

void input(){
	cin>>d>>h;//nhap do dai va chieu cao cua manh dat
	getline(cin,s[0]);
	for(int i=0;i<h;i++){
		getline(cin,s[i]);
	}
}

void lap_day(){//lap day dai dat bang nuoc
    nuoc=0;
	for(int i=0;i<h;i++){
		int l=0,r=d-1;
		while(s[i][l]!='#')l++;
		while(s[i][r]!='#')r--;
		for(int j=l+1;j<r;j++){
			if(s[i][j]==' '){
                s[i][j]='-';
                nuoc++;
			}
		}
	}
}

void output(){
	for(int i=0;i<h;i++){
		cout<<s[i]<<endl;
	}
	cout<<nuoc<<endl;
}

int main() {
    int test;
    cin>>test;
    while(test--){
        input();
        lap_day();
        output();
    }
}
