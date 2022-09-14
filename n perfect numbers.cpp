#include<iostream>
using namespace std;
int main()
{
int n,i,j,k,c,n1=0;
cout<<"\nenter the limit : ";
cin>>n;
cout<<"\nperfect numbers : \n";
for(i=1;i<10000;i++){
c=0;
for(j=1;j<i;j++){
if(i%j==0){
c+=j;
}
}
if(i==c){
cout<<i<<"\n";
n1++;
if(n1==n)
break;
}

}
return 0;
}


