#include<iostream>
using namespace std;


// using function 

int decToBinary(int dnum){
    int ans=0, pow=1;
    while (dnum > 0)
    {
        int rem = dnum % 2;
        dnum /=2;
        ans+= (rem*pow);
        pow *= 10;
    }
    return ans;
    
}
int main (){
    int dnum=50;
    // cout<<decToBinary(dnum)<<endl;
    for(int i=1;i<=10;i++){
        cout<<decToBinary(i)<<endl;
    }
 return 0;   
}