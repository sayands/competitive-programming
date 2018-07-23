#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printReverse(string str){
    vector <string> words;
    string res = "";
    
    for(int i=0;i<str.size();i++){
        if(isalpha(str[i]) || isdigit(str[i])){
            res += str[i];
        }
        else{
            words.push_back(res);
            res = ""; 
        }
    }
    
    words.push_back(res);
    
    for(int i=words.size()-1;i>0;i--)
        cout<<words[i]<<".";
    cout<<words[0];
}

int main() {
	//code
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    string str;
	    cin>>str;
	    
	    printReverse(str);
	    cout<<endl;
	}
	return 0;
}