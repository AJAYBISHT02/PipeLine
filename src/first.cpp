# include <iostream> //preprocessor directive
using namespace std; 

int main(){
    cout<<"Hello world"<<endl;
    int a,b;
    cout<<"Enter the a :";
    cin>>a;
    cout<<"Enter the b :";
    cin>>b;
    cout<<(a>b?a:b); //Ternary Operator
    cout<< " is greater.";
    return 0;
}