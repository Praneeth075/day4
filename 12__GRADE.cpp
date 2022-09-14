#include <iostream>
using namespace std;
int main(){
float a,b,c,d,tot;
 float agg;
cout<<"Enter the marks in python ";
cin>>a;
cout<<"Enter the marks in c programming:";
cin>>b;
cout<<"Enter the marks in Mathematics:";
cin>>c;
cout<<"Enter the marks in Physics:";
cin>>d;
tot=a+b+c+d;
cout<<"TOTAL : " << tot;
cout<<"\n";
agg=tot/4;
cout<<"AGGREGATE : " <<agg;
cout<<"\n";
 if (agg>=75){
cout<<"DISTINCTION";
 }
 else if (agg>=60 &&agg<75){
cout<<"FIRST DIVISION";
 }
 else if (agg>= 50 &&agg<60){
cout<<"SECOND DIVISION";
 }
 else if (agg>= 40 &&agg<50){
cout<<"THIRD DIVISION";
 }
 else if (agg< 40){
cout<<"FAIL";
 }
 else {
cout<<"invalid input";
 }
 return 0;
}
