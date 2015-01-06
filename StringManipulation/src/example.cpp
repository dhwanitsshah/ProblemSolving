#include <iostream>

using namespace std;

void print(const char*);
char* stringToChar(string);
bool match(char* first, char* second);


int main() {

	string first = "United*";
	string second = "United States of America";
	print(first.c_str());
	print(second.c_str());
	char *c = stringToChar(first);
	cout<<c;

	char s1[] = "* done * boy";
	char s2[] = "wells done my boy";

	cout<<endl<<endl<<match(s1,s2);
	return 0;
}

void print(const char* str)
{
	cout<<str<<endl;
}

char* stringToChar(string str){
	char *c = new char(str.size()+1);
	copy(str.begin(),str.end(), c);
	c[str.size()] = '\0';
	return c;
}

bool match(char *first, char *second){

	if(*first==NULL && *second==NULL)
		return true;

	if(*first=='*' && *(first+1)!=NULL && *second==NULL)
		return false;

	if(*first == *second ||  *first=='?')
		return match(first+1,second+1);

	if(*first=='*')
		return (match(first, second+1) || match(first+1, second));

	return false;
}

