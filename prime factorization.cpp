#include<iostream>

using namespace std;

int main()
{
      int in;      
      while(1)
      {
      cout<<"�п�J�@�����:";
      cin>>in;
      cout<<"1" ;
      for(int x=2;x<=in;x++)
      {
                while(in%x==0)
                {
                          cout<<"*"<<x ;
                          in/=x ;
                }
      }
      cout<<endl;
      } 
      system("pause");

      return 0;

}
