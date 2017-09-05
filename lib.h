#include <iostream>
#include <cmath>
#include <vector>

void print(std::vector <int> &a)
{
  for(int ii=0; ii<a.size(); ii++)
    std::cout<<a[ii];
  
  std::cout<<"\n";
}

void vec(std::vector <int> &a, int z)
{
  int p=1, jj=0;
  for(int ii=1; p<=z; ii++)
    {
      p*=10;
      jj+=1;
    }
  p/=10;
  a.resize(jj);
  for(int ii=0; ii<jj; ii++)
    {
      a[ii]=(z-z%p)/p;
      z=z%p;
      p=p/10;
    }	
	
}

int unvec(std::vector <int> &a)
{
  int z=0;
  for(int ii=0; ii<a.size(); ii++)
    {
      z+=a[ii]*std::pow(10,a.size()-ii-1);

    }
  return z;
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
