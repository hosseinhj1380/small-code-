//g++ aa.cpp -o aa.exe -std=c++14
#include<iostream>
using namespace std;
int main()
{
        int a,b,c,d;
        cin>>a>>b;
        c=(a-b)/2;
        d=c+b;
        if (b>=a)

        {
                cout<<"Wrong order!";

        }else if ((a-b)%2!=0)
        {
                cout<<"Wrong difference!";

        }
        else{
                for (size_t i = 1; i <= a; i++)
                {
                        for (size_t j= 1; j <=a; j++)

                        {
                            if (i<=c)
                            {
                                    cout<<"*"<<"\t";

                            }else if (i>d)
                            {
                                    cout<<"*"<<"\t";

                            }
                            
                            
                            else if (j<=c)
                            {
                                    cout<<"*"<<"\t";
                            }else if (j>d)
                            {
                                   cout<<"*"<<"\t";

                             }
                             else if (c<j<d)
                           {
                                    cout<<"\t";
                          }
                            
                            
                            
                            
                        
                                  
        
                                
                        }
                  cout<<endl;      
                }
                
        }
        

        return 0;
}