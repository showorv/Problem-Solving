#include<bits/stdc++.h>
using namespace std;

int main(){

int t ;
cin >> t;
while(t--){
 string s;
 cin >> s;

 bool paire = false;
 for(int i = 0 ; i < s.length() - 1 ; i++)
 {
    if(s[i] == s[i + 1])
    {
        paire = true;
        break;
    }

 }
 if(paire)
 {
    cout << 1 <<endl;
 }
 else{
    cout << s.length() << endl;
 }


}

return 0;
}