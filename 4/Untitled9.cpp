#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	char s[5][400];
	string h;
	cin>>h;
	for(int i=0;i<n;i++){
		if(h[i]=='0'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='X';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='.';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='X';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='1'){
			s[0][i*4+0]='.';
			s[0][i*4+1]='.';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='.';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='.';
			s[2][i*4+1]='.';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='.';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='.';
			s[4][i*4+1]='.';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='2'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='.';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='X';
			s[3][i*4+1]='.';
			s[3][i*4+2]='.';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='3'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='.';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='.';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='4'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='.';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='X';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='.';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='.';
			s[4][i*4+1]='.';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='5'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='X';
			s[1][i*4+1]='.';
			s[1][i*4+2]='.';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='.';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='6'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='X';
			s[1][i*4+1]='.';
			s[1][i*4+2]='.';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='X';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='7'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='.';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='.';
			s[2][i*4+1]='.';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='.';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='.';
			s[4][i*4+1]='.';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else if(h[i]=='8'){
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='X';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='X';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
		else{
			s[0][i*4+0]='X';
			s[0][i*4+1]='X';
			s[0][i*4+2]='X';
			s[0][i*4+3]='.';
			s[1][i*4+0]='X';
			s[1][i*4+1]='.';
			s[1][i*4+2]='X';
			s[1][i*4+3]='.';
			s[2][i*4+0]='X';
			s[2][i*4+1]='X';
			s[2][i*4+2]='X';
			s[2][i*4+3]='.';
			s[3][i*4+0]='.';
			s[3][i*4+1]='.';
			s[3][i*4+2]='X';
			s[3][i*4+3]='.';
			s[4][i*4+0]='X';
			s[4][i*4+1]='X';
			s[4][i*4+2]='X';
			s[4][i*4+3]='.';
		}
	}
	for(int j=0;j<5;j++){
		for(int k=0;k<n*4-1;k++){
			cout<<s[j][k];
		}
		cout<<endl;
	}
	return 0;
}
