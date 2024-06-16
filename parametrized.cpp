# include<iostream>
using namespace std;
class rectangle{
       private:
       double length;
       double breadth;
       public:
       rectangle(double l,double b){
       length=l;
       breadth=b;
       }
       double calculatearea(){
       return length*breadth;
       }
       };                            
       int main(){
       rectangle obj1(10,8);
       rectangle obj2(5,4);
       cout<<"Area of Rectangle 1 is:"<<obj1.calculatearea()<<endl;
       cout<<"Area of Rectangle 2 is:"<<obj2.calculatearea()<<endl;
       return 0;
       }
                                                 
