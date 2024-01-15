#include<iostream>
using namespace std;
int main(){
    int personal[4],home[4],n=0,common[4],i,j;
    cout<<"Enter the pan numbers of applicants for personal loan: "<<endl;
    //obtaining data from user using loops
    for(i=0;i<4;i++)
        cin>>personal[i]; //input data stored in arrays
    }
    cout<<"Enter the pan numbers of applicants for home loan: "<<endl;
    for(j=0;j<4;j++){
        cin>>home[j];
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(personal[i]==home[j]){
                common[n]=personal[i];
                n++;
            }
        }
    }
    cout<<"The people who applied to both home and personal loans simultanoeusly are "<<endl;
    for(i=0;i<n;i++){
        cout<< common[i]<<" " ; //sorted out common applicants are printed out.
    }
    cout<<endl;
    return 0;
}
