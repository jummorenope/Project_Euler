#include <iostream>
#include <cmath>
#include <vector>
#include "lib.h"

bool rot(std::vector <int> &a);

int main (void)
{
  int n=0;
  std::vector <int> a{1,9,7};
  for(int ii=1; ii<1000000; ii++)
    {
      if(prime(ii))
	{
	  vec(a,ii);
	  if(rot(a))
	    n+=1;
	}
    }
  std::cout<<n<<std::endl;
  return 0;
}

bool rot(std::vector <int> &a)
{
  std::vector <int> b(a.size());
  std::vector <int> c(a.size());
  for(int jj=0; jj<a.size(); jj++)
    {
      for(int kk=0; kk<a.size()-jj; kk++)
	{
	  c[kk]=a[jj+kk];
	}
      
      for(int kk=a.size()-jj; kk<a.size(); kk++)
	{
	  c[kk]=a[kk-a.size()+jj];
	}
      b[jj]=unvec(c);
    }

  for(int ii=0; ii<b.size(); ii++)
    {
      if(prime(b[ii]))
	{
	}
      else
	{
	  return false;
	}
    }
  return true;
}
  
