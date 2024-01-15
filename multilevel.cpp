#include<iostream>
using namespace std;
class employee{ //Parent class
public:
int emp_id;
string emp_name;
float emp_sal;
float tax_red(float emp_sal){
float net_sal=emp_sal*(0.12);
return net_sal;
}
};
class gazette:public employee{ //Derived class
public:
string jobtype;
string post;
float allowance(float x){
float net_allowance=x*(0.2);
return net_allowance;
}
};
class non_gazette:public employee{ //Another derived class from the same parent class
public:
string jobtype;
string post;
float allowance(float y){
float net_allowance=y*(0.2);
return net_allowance;
}
};
int main(){
string answer; string yourname; int yourid;
cout<<"Enter your name: "<<endl;
cin>>yourname;
cout<<"Enter your employee id: "<<endl;
cin>>yourid;
cout<<"Are you a gazetted officer?"<<endl;
cin>>answer;
if (answer == "yes" || "YES" || "Yes" || "Y" || "y" ){
gazette g1; //object created
g1.emp_name = yourname;
g1.emp_id = yourid;
g1.emp_sal=0;
cout<<"Enter your jobtype: "<<endl;
cin>>g1.jobtype;
cout<<"Enter your post: "<<endl;
cin>>g1.post;
cout<<"Enter your salary: "<<endl;
cin>>g1.emp_sal;
cout<<"Employee name: "<< g1.emp_name<<endl;
cout<< "Employee id: "<<g1.emp_id<<endl;
float ga=g1.allowance(g1.emp_sal);
cout<<"Employee allowance: "<< ga <<endl;
float gs= g1.tax_red(g1.emp_sal)+ ga;
cout<<"Employee net salary: " << gs <<endl;
}
 else if (answer== "NO" || "No" ||"no" ||"N" ||"n"){
non_gazette n1; //another object created
n1.emp_sal=0;
n1.emp_name=yourname;
n1.emp_id-yourid;
cout<<"Enter your jobtype: "<<endl;
cin>>n1.jobtype;
cout<<"Enter your post: "<<endl;
cin>>n1.post;
cout<<"Enter your salary: "<<endl;
cin>>n1.emp_sal;
cout<<"Employee name: "<<n1.emp_name<<endl;
cout<<"Employee id: "<<n1.emp_id<<endl;
float na=n1.allowance(n1.emp_sal);
cout<<"Employee allowance: "<< na <<endl;
float ns= n1.tax_red(n1.emp_sal)+na;
cout<<"Employee net salary: "<<ns<<endl;
}
return 0;
}
