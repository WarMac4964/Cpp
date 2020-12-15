#include <iostream>
#include <vector>

using namespace std;

vector <char> vowels {'a','e','i','o','u'};

vector <int> test_scores {100,98,89,85,93};

int main(){
    cout<<endl<<vowels[0]<<endl;
    cout<<endl<<vowels[1]<<endl;
    cout<<endl<<vowels[2]<<endl;
    cout<<endl<<vowels[3]<<endl;
    cout<<endl<<vowels[4]<<endl;


    cout<<endl<<vowels.at(0)<<endl;
    cout<<endl<<vowels.at(1)<<endl;
    cout<<endl<<vowels.at(2)<<endl;
    cout<<endl<<vowels.at(3)<<endl;
    cout<<endl<<vowels.at(4)<<endl;

    test_scores.push_back(80);
    test_scores.push_back(90);


} 