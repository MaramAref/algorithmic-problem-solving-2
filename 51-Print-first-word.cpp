#include <iostream>
using namespace std;

string ReadString() { 
 string S1 = " "; 
 cout << "Pleas Enter your string ? \n"; 
 getline(cin, S1); 
 return S1; 
} 

void PrintEachWordInString(string S1){
	string word=" ";
	for(short i=0;i<=S1.length();i++){
		word+=S1[i];
		if(S1[i]==' '){
		break;
		}
	}
	cout<<word<<endl;
	
}

int main(){
	string S1=ReadString();
	
	cout<<"first word in this string is: "<<endl;
	PrintEachWordInString(S1);
}
