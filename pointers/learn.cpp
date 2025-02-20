
#include<iostream>
using namespace std;

void print( int *v){

    cout<<"without * "<<v<<endl;
    cout<<"With * "<<*v<<endl;
}

void updateprint ( int *v){
    // v = v+1; //? didnt update value.

    *v = *v+1; // will update
    cout<< *v<<endl;
}

int main(){

    int arr[10] = {2,6,4,9};

    cout<<arr<<endl; //?first index address
    cout<<&arr[0]<<endl; //?first index address
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<< *(arr+1)<<endl;
    cout<< *(arr+2)<<endl;

    // ? formula from above
    //! arr[i] = *(arr+i) or i[arr] = *(i+arr)

    int i = 3;
    cout<<*(arr + i); //? will be 9 of index 3;


    int arrr[10];

    // arr = arr +1 //! Error
    
    int *ptr = &arrr[0];

    cout<< ptr<<endl;

     ptr = ptr+1;
     cout<<ptr<<endl; 


     // ! char arrays pointer

    char ch[7] = "abcede";

    cout<<ch<<endl;

    char *c = &ch[0];
    cout<< c <<endl;

    char temp = 'z';
    char *tp = &temp;
    cout<<tp <<endl;


    //! function pointer

    int value = 5;
    int *v = &value;

    print(v);
    updateprint(v);


    //! DOUBLE POINTER

    int d = 5;
    int *dp = &d;
    int **dp2 = &dp;
    int ***dp3 = &dp2;

    cout<< " printing of *dp ->>"<<*dp<<endl;
    cout<< " printing of dp ->>"<<dp<<endl;
    cout<<"printing of dp2 ->>"<<dp2<<endl;
    cout<<"printing of * dp2 ->>"<<*dp2<<endl;
    cout<<"printing of * dp2 value ->>"<<**dp2<<endl;
    cout<<"printing of * dp3 ->>"<<*dp3<<endl;


    // practice

    int first = 8;
    int second = 18;
    int *pp = &second;
     *pp = 9;

    cout<< first <<" "<<second <<endl;

    int *n = 0; //?null pointer
    int f = 12;
    n = &f;
    cout<<"ans is:"<< *n<<endl;

    float fa= 12.5;
    float s = 21.5;
    float * pt = &fa;
    (*pt)++;
    *pt = s;
    cout<<*pt <<" "<<fa<<" "<<s<<endl;


    
}