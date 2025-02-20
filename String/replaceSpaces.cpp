#include<iostream>
using namespace std;

string replaces ( string str){

    string temp = "";

    for ( int i=0; i< str.length(); i++){
        if( str[i] ==' '){
            temp.push_back('#');
            temp.push_back('#');
            temp.push_back('#');
        }else{

            temp.push_back( str[i]);
        }
    }
    return temp;
}

int main(){

    cout<<replaces("my name");
}
