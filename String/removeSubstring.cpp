#include <iostream>
#include <string>
using namespace std;

string removeSub( string s, string p){

    while( s.length()!=0 && s.find(p)< s.length()){
        s.erase( s.find(p), p.length()); // find p theke p er length jototuku tototuku erase
    }
    return s;
}

int main(){

    string s = "daabcbaabcbc";
    string p = "abc";

    cout<< removeSub(s,p);
}
