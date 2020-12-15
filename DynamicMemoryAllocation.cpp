#include<iostream>
using namespace std;
int main(){
    
    int *arr_ptr = new int[10];

    cout<<*arr_ptr<<endl;

    delete [] arr_ptr;
    

    char *vowel = new char;
    *vowel = 'A';
    cout<<*vowel<<endl;
    delete vowel;
    return 0;
}