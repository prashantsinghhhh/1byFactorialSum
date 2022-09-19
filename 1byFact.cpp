#include<iostream>
using namespace std;
float fact(int n){
    int factorial;
  if(n==0){
    return 1;
} else if(n==1){
    return 1;
} 
 factorial= n*fact(n-1);
return factorial;
}



int main(){
    int n;
    cout<<"enter the n value\n";
    cin>>n;
    float sum = 0;
    for(float i=1.0;i<=n;i++){
        float term= 1/fact(i);
      sum=sum+term;
    }

    cout<<sum;


    return 0;
}