#include<iostream>
using namespace std;
class machine
{
    public:
    machine()
    {
        cout<<"This is Electronic Device \n";
    }
};
class computer : public machine
{
    public:
    computer()
    {
        cout<<"I am a PC";
    }
};
int main(){
    computer obj;
    return 0;
}