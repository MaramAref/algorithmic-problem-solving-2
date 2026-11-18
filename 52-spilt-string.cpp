#include <iostream> 
#include <string> 
#include <iomanip> 
 
using namespace std;

string ReadString(){
	string string1;
	cout<<"Enter your string: \n";
	getline(cin,string1);
	return string1;
}

void Spelling(string string1){
	for(short i=0;i<string1.length();i++){
		cout<<string1[i]<<endl;
	}
}
int main(){
	string S1=ReadString();
	
	cout<<"The Spelling: "<<endl;
	Spelling(S1);
	
	return 0;
}
