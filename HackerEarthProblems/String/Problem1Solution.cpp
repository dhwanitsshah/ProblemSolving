//Complete String

#include <iostream>
using namespace std;


int main()
{
	int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
    	cin>>s[i];
    }
    bool found = false;
    for(int i=0;i<n;i++){
    	for(int k='a';k<='z';k++){
    		found = false;
    		for(int j=0;j<s[i].size();j++){
    			if(s[i][j]==((char)k)){
    				found=true;
    			}
    		}
    		if(found==false){
    			cout<<"NO"<<endl;
    			break;
    		}
    	}
    	if(found==true)
    		cout<<"YES"<<endl;
    }
    return 0;
}
