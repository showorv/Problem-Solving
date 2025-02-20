#include<iostream>
#include<string>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for (int i=0; i<26; i++){
        if( a[i] != b[i]){
        return 0;
    }
    }
   return 1;

}
bool permatution ( string s1, string s2){

    int count1[26] = {0};
    // character count array
    for( int i =0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    //traverse string using s1 length

    int i=0;
    int windowIndex = s1.length();
    int count2[26] = {0};

    //first window selection
    while( i<windowIndex && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual (count1,count2))
        return 1;

    // next window selection & remove previous

    while( i<s2.length()){
        char newChar = s2[i];

        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowIndex];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if( checkEqual(count1,count2)){
            return 1;
        }

    }
}



int main(){

    string s1 = "ab";
    string s2 = "cidba000";

    cout<<permatution(s1,s2);
}
