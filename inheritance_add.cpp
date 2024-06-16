#include<iostream>
using namespace std;
class calc{
    public:
    int a ,b;
    int sum;
};
class add:public calc{
    public:
    add(){
        cout<<"Enter the Value of A and B: \n";
        cin>>a>>b;
        sum = a+b;
        cout<<"Sum of A and B is:"<<sum;
    }
};
int main(){
    add obj1;
    return 0;
}