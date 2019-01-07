#include<iostream>
using namespace std;
int comp_binary_to_decimal(int n)
{
    int temp=n;
    int last_dig;
    int base=1;
     int decimal_val=0;
    while(temp)
    {
        last_dig=temp%10;
        temp=temp/10;
        decimal_val+=last_dig*base;
        base=base*2;
    }
    return decimal_val;
}

void comp_decimal_to_binary(int n)
{

    int binaryNum[1000];
    int i=0;
    while(n>0)
    {
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
     cout<<"\nThe binary equivalent of "<<n<<" is\n";

    for (int j=i-1;j>=0;j--)
    {
        cout<<binaryNum[j];
    }
}

int main()
{
    cout<<"START OF MAIN FUNCTION\n";
    cout<<"hey\n";
    cout<<"how you doing\n";
    int i,n,t;
    cout<<"\nEnter a binary number:\t";
    cin>>n;
    cout<<"The decimal equivalent of "<<n<<" is\n";
    t=comp_binary_to_decimal(n);
    cout<<t;
    cout<<"\n\nEnter a decimal number:\t";
    cin>>n;
    cout<<"\n\nEND OF MAIN FUNCTION";

}
