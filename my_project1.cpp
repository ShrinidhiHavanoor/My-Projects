#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Operations that can be performed->"<<endl<<endl;
    cout<<"1.To find the square of the given number"<<endl;
    cout<<"2.To find the square root of the given number"<<endl;
    cout<<"3.To find the factors of the given number"<<endl;
    cout<<"4.To check whelther the number is even or odd"<<endl;
    cout<<"5.Check Whelther the given number is prime or not"<<endl;   
    cout<<"6.factorial of the given number"<<endl;
    cout<<"7.To Check whelther is positive or negative"<<endl;
    cout<<"8.To Check Whelther the number is a perfect number"<<endl;
    cout<<"9.exit"<<endl<<endl;
    cout<<"PLease enter the operation number you want to perform->"<<endl;
    cin>>n;
    while(n>0)
    {
        switch(n)
        {
            case 1:
            int a;
            cout<<"Enter the number"<<endl;
            cin>>a;
            cout<<"The square of the given number="<<a*a<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;
            
            case 2:
            int b;
            cout<<"Enter the number"<<endl;
            cin>>b;
            cout<<"The square root of the entered number is->"<<sqrt(b)<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;
            
            case 3:
            int d;
            cout<<"Enter the number"<<endl;
            cin>>d;
            cout<<"The factors of the given number is="<<endl;
            for(int i=1;i<=d;i++)
            {
                if(d%i==0)
                cout<<i<<" ";
            }
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;

            case 4:
            int e;
            cout<<"Enter the number"<<endl;
            cin>>e;
            if(e%2==0)
            cout<<"Even number"<<endl;
            else
            cout<<"Odd number"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            break;
            
            case 5:
            int f;
            cout<<"Enter the number"<<endl;
            cin>>f;
            int c;
            c=1;
            for(int i=2;i<=sqrt(f);i++)
            {
                if(f%i==0)
                {
                    c=0;
                }
            }
            if(c==1)
            cout<<"Prime Number"<<endl;
            else
            cout<<"Not a Prime Number"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;

            case 6:
            int g;
            cout<<"Enter the number"<<endl;
            cin>>g;
            int fact;
            fact=1;
            for(int i=1;i<=g;i++)
            {
                fact=fact*i;
            }
            cout<<"The factorial of the given number->"<<fact<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;

            case 7:
            int h;
            cout<<"Enter the number"<<endl;
            cin>>h;
            if(h>0)
            cout<<"The given number is positive"<<endl;
            else
            cout<<"The given number is negative"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;

            case 8:
            int k;
            cout<<"Enter the number"<<endl;
            cin>>k;
            int sun;
            sun=0;
            for(int i=1;i<=k;i++)
            {
                if(k%i==0)
                {
                    sun+=i;
                }
            }
            if(2*k==sun)
            cout<<"Perfect number";
            else
            cout<<"Not a perfect number";
            cout<<"--------------------------------------------------------------"<<endl<<endl;
            cout<<"Operations that can be performed"<<endl<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl;
            cin>>n;
            break;

            case 9:
            cout<<"Exited successfully"<<endl;
            return 0;
            break;

            default :
            cout<<"Error 305::Please enter the number once again"<<endl<<endl;
            cout<<"--------------------------------------------------------------"<<endl<<endl;
            cout<<"Operations that can be performed"<<endl<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"Operations that can be performed->"<<endl<<endl;
            cout<<"1.To find the square of the given number"<<endl;
            cout<<"2.To find the square root of the given number"<<endl;
            cout<<"3.To find the factors of the given number"<<endl;
            cout<<"4.To check whelther the number is even or odd"<<endl;
            cout<<"5.Check Whelther the given number is prime or not"<<endl;
            cout<<"6.factorial of the given number"<<endl;
            cout<<"7.To Check whelther is positive or negative"<<endl;
            cout<<"8.To Check Whelther the number is a perfect number"<<endl;
            cout<<"9.exit"<<endl<<endl;
            cout<<"Again,PLease enter the operation number you want to perform->"<<endl<<endl;
            cin>>n;
            break;
        }

    }
}