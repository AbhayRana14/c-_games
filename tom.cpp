#include<iostream>
using namespace std;
int main()
{
    long T;
    cin>>T;
    for(long i=0;i<T;i++)
    {
        long long TS;
        long long count =0;
        cin>>TS;
        long long t=TS;
        int flag=0;
        for(long long j=1;j<=TS;j++)
        {
            if(TS%2!=0)
            {
                 if(j%2==0)
                 {
                     count++;
                    
                 }
                 
            }
            else
            {
            
                    while(j!=0 || TS!=0)
                    {
                        if(TS%2==1 && j%2==1)
                        {
                              break;
                        }
                        else if(TS%2==1 && j%2==1)
                        {
                              break;
                        }
                        else if(TS%2!=0 && j%2==0)
                        {
                            cout <<TS<<"    "<<j<<endl;
                            count++;
                        
                        }
                    
                           j=j/2;
                           TS=TS/2;
                       
                    }
                   
            }
            
        }
        
         cout<<count<<endl;
        
        

    }
    return 0;
}