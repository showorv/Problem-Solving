#include<iostream>
using namespace std;


//for avoid alphaneumeric
    bool alphaneumeric( char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'||(ch>='0' && ch<='9')){
                                    return 1;
         }
         return 0;
    }

    char toLowerCase( char ch){

        if( (ch>='a' && ch<='z')||(ch>='0' && ch<='9'){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkPalindrome( string a){

        int s=0;
        int e=a.length()-1;

        while( s<=e){
            if( a[s] != a[e]){
               return 0;
               }
                else{
                    s++;
                    e--;
                }
        }
        return 1;
    }
    bool isPalindrome( string s){

            // to avoid unused char
            //to store without unused char
            string temp = "";

            for( int j=0; j<s.length(); j++){
                if( alphaneumeric( s[j])){
                    temp.push_back( s[j]);
                }
            }

            //to avoid uppercase

            for(int j=0; j<temp.length();j++){
                temp[j] = toLowerCase(temp[j]);
            }

            return checkPalindrome( temp);
        }

int main(){


}
