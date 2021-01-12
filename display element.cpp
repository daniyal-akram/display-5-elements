#include<iostream>
using namespace std;
int main()
{ 
	int marks[5],sum=0;
  for(int j=0;j<5;j++)
  {  
    cin>>marks[j];
    
    sum=(float)sum+marks[j];
    cout<<"each multiplied by 5="<<marks[j]*5<<endl;
    
  }cout<<"sum of number="<<sum<<endl;
  cout<<"average of numbers="<<(float)sum/5<<endl;//float is type casting which is used 
  //change the cast of any integer(int)to float or float to integer.
   
	
}
