#include <iostream>
using namespace std;

void findAllSubSets(const char*, int, int, char*);
void printArr(char *a, int n);

int main() {

	char arr[] = {'X','Y','Z'};
	char res[] = {' ',' ',' '};
	findAllSubSets(arr,3,0, res);
}


void findAllSubSets(const char* a, int n, int i, char* res){

	if(i==n){
		printArr(res,n);
		cout<<";"<<endl;
		return;
	}

	findAllSubSets(a, n, i+1, res);
	res[i] = a[i];
	findAllSubSets(a, n, i+1, res);
	res[i] = ' ';

}

void printArr(char *a, int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		//a[i] = ' ';
	}
}
