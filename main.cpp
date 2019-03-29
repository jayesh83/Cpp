#include <iostream>

using namespace std;
int findGcd(int, int);
int main()
{
    int num1, num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    cout<<"GCD: "<<findGcd(num1, num2);
    return 0;
}

int findGcd(int a, int b){
    int i,hcf;
    a = a>0?a:-a;   //if -ve entered, will then converted to +ve;
    b = b>0?b:-b;

    int bigger = a>b?a:b;
    for(i=2;i<=bigger/2;i++){

      if(b%i==0&&a%i==0)
        hcf = i;
    }
    return hcf;
}
