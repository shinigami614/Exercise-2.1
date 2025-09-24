#include <iostream>
using namespace std;
class Addition{
      Private:
              int a,b,c;
              Public:
                     //construct to initialize the three integers
              Addition(){
                         a=25;
                         b=30;
                         c=50;
                         }
              //Member function to calculate and display product of the interger
              
      void product(){
           int result =a*b*c;
           cout<<"The product of the integers is:"<<result>>endl;
           }
           };
      Int main(){
          Addition obj;//create object of the class
          obj.product();//call member function
          return 0;
          }
          
