#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int flag=-1;
    for(int i=0; i<n/2; i++)
        {
            if(A[i]==A[n-i-1])
            {
                flag=1;
            }
            else
            {
                flag=-1;
            }
//            cout<<endl<<flag<<endl;
        }
        if(flag==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

//    if(n%2==0)  //even elements
//    {
//        for(int i=0; i<n/2; i++)
//        {
//            if(A[i]==A[n-i-1])
//            {
//                flag=1;
//            }
//            else
//            {
//                flag=-1;
//            }
////            cout<<endl<<flag<<endl;
//        }
//        if(flag==1)
//        {
//            cout<<"YES";
//        }
//        else
//        {
//            cout<<"NO";
//        }
//    }
//    else //add elements
//    {
//        for(int i=0; i<n/2; i++)
//        {
////            if(i==n-1-i)
////            {
////                break;
////            }
////            else
//                if(A[i]==A[n-i-1])
//            {
//                flag=1;
//            }
//            else
//            {
//                flag=-1;
//            }
////            cout<<endl<<flag<<endl;
//        }
//
//        if(flag==1)
//        {
//            cout<<"YES";
//        }
//        else
//        {
//            cout<<"NO";
//        }
//    }


    return 0;
}
