//http://codeforces.com/contest/118/problem/A
#include <iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.size();
	for(int c=0;c<s.size();c++){
		if(toupper(s[c])==(int)'A'||toupper(s[c])==(int)'O'||toupper(s[c])==(int)'Y'||toupper(s[c])==(int)'E'||toupper(s[c])==(int)'U'||toupper(s[c])==(int)'I'){
            if(s[c-1]!='.'){
                    if(n-1==c){
                        s.erase(c,1);
                    }
                    else{

            s.replace(c,1,".");
                    }
            }
            else{

            s.erase(c,1);
            }
        }
		else{

            if(s[c]!='.'){
                    if(s[c-1]=='.'){
                    s[c]=tolower(s[c]);
                }
            }
			else{
                s[c]=tolower(s[c]);
                s.insert(c,".");
                c++;
                }
			}
        }
        cout<<s;
	return 0;
    }

//asssssss............................................
#include <bits/stdc++.h>
using namespace std;

bool isVowel( char car ){
	char c = char ( tolower( car ) );
	if( c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ) return 1;
	return 0;
}

int main(){
	string s;
	cin >> s;
	for( int i = 0; i < s.size(); ++i ){
		if( !isVowel( s[ i ] ) ) cout << "." << char( tolower( s[ i ] ) );
	}
	return 0;
}