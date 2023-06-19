#include<bits/stdc++.h>
using namespace std;
int main(){
	
}
int reverseNumber(int number){
	int dupNum = number;
	if(dupNum == 0){return 0};
	int revnum = 0;
	while(dupNum > 0){
		int ld = dupNum % 10;
		revnum = (revnum * 10) + ld;
		dupNum / 10;
	}
	return revnum;
}