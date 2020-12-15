#include<iostream>
using namespace std;
int main(){
    int score {100};
    int *score_ptr {&score};

    cout<<"The Value stored in Score is : "<<score<<endl;
    cout<<"The Value stored in Score Pointer is : "<<*score_ptr<<endl;
    cout<<"The Address of Score is : "<<&score<<endl;
    cout<<"The Address of Score Pointer is : "<<&score_ptr<<endl;
    cout<<"The Address of Score in Score Pointer is : "<<score_ptr<<endl;

    return 0;
}