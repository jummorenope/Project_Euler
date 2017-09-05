#include <iostream>
#include <cmath>
#include <vector>

int consecutives(long int a, long int b);
bool prime(long int n);

int main(void)
{
  int ka=0,k=0;
  std::vector <long int> a{0,0};
   for(long int ii=-999; ii<1000; ii++)
    {
      for(long int jj=-1000; jj<=1000; jj++)
	{
	  if(consecutives(ii,jj)>k)
	    {
	      k=consecutives(ii,jj);
	      a[0]=ii;
	      a[1]=jj;
	    }
	  
	}
    }
   std::cout<<a[0]<<"\t"<<a[1]<<"\t"<<k<<"\t"<<a[0]*a[1]<<std::endl;
      

  return 0;
}

int consecutives(long int a, long int b)
{
  int k=0;
  long int z=0;
  for(int ii=0; ii>=0; ii++) 
    {
      z=ii*ii+a*ii+b;

      if(prime(z))
	{	  
	  k+=1;
	}

      else
	break;
    }
  
  
  return k;
}

bool prime(long int n)
{
  int r=std::sqrt(n);
  if(n<=1)
    return false;
  
  if((n%2==0)&&(n!=2))
    return false;

  for(int ii=3; ii<=r; ii++)
    {
      if(n%ii==0)
	return false;
      ii+=1;
    }
  return true;
}
  
