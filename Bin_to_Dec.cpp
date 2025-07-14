#include<iostream>
using namespace std;

int binToDec(int biNum){
    int ans=0,pow=1;
    while (biNum>0)
    {
        int rem=biNum%10;
        ans += rem*pow;

        biNum /= 10;
        pow*=2;
    }
    return ans;
    
}
int main (){
    cout<<binToDec(101)<<endl;
}