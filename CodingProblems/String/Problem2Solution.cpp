//Parenthesis Combinations

#include <iostream>
using namespace std;


void parenthesis(string str, int open, int close, int n){
	
	if(open < n){
		parenthesis(str+"{", open+1, close, n);
	}
		
	if(open > close){
		parenthesis(str+"}",open, close+1, n);
	}
	
	if(close == n){
		cout<<str<<endl;
	}
	return;
}


int main() {
	parenthesis("",0,0,3);
	return 0;
}