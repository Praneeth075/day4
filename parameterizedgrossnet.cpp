#include <iostream>
#include <string>
class employee
{
    protected:
                int id,basic;                    
                char name[20];
    public:
                employee(int i,char *s,int b)
                    {
                        id=i;    
                        strcpy(name,s);         
                        basic=b;
                    }
                void show()
                    {
                        cout<<"\nEmp. Id: "<<id<<"\n";
                        cout<<"Emp. Name: "<<name<<"\n";
                        cout<<"Basic Salary: "<<basic<<"\n";
                    }
};
class grossnet: public employee
{
            float deduct,gross,net;
            public:
                        grossnet(int i,char *s, int b,int d,float g,float n): employee(i,s,b)
                        {
                                    deduct=d;      gross=g;         net=n;
                        }
                        void calculate();
};
void grossnet::calculate()
{
    float da,hra;
    da=0.4*basic;
    hra=0.2*basic;
    gross=basic+da+hra;
    net=gross-deduct;
    cout<<"Gross Pay: "<<gross<<"\n";
    cout<<"Net Pay: "<<net<<"\n";
}
 
void main()
{
    int eid,ebasic;
    float ededuct;
    char ename[20];
    cout<<"Enter:\n";
    cout<<"Employee Id: ";                  
    cin>>eid;
    cout<<"Employee Name: ";           
    cin>>ename;
    cout<<"Basic Salary: ";    
    cin>>ebasic;
    cout<<"Deductions: ";      
    cin>>ededuct;
    grossnet gn(eid,ename,ebasic,ededuct,0,0);
    gn.show();
    gn.calculate();
}

