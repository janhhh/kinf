#include<iostream>
using namespace std;
int main(){
	char t[60][20];
	for(int i=0;i<60;i++){
		for(int a=0;a<20;a++){
			t[i][a]='.';
		}
	}
	cout<<"\n";
	int x,y;
	cin>>x>>y;
	x--;y--;
	int a;
	cin>>a;
	for(int i=x;i<x+a+1;i++){
		t[i][y]='*';
	}
	x=x+a;
	int b;
	cin>>b;
	for(int i=y+1;i<y+b+1;i++){
		t[x][i]='*';
	}
	y=y+b;
	x++;
	int c;
	cin>>c;
	for(int i=x;i<x+c;i++){
		t[i][y]='*';
	}
	for(int i=0;i<20;i++){
		for(int a=0;a<60;a++){
			cout<<t[a][i];
		}
		cout<<"\n";
	}
	return 0;
}
