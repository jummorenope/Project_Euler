#include "lib.h"

bool truncatable(std::vector <int> a);

int main (void)
{
  int suma=0;
  int cont=0;
  std::vector <int> a;
  for(int ii=10; cont<11; ii++)
    {
      vec(a,ii);
      if(truncatable(a))
	{
	  suma+=ii;
	  cont+=1;
	  std::cout<<cont<<"\t"<<ii<<"\t"<<suma<<std::endl;
	}
    }
  return 0;
}

bool truncatable(std::vector <int> a)
{
  std::vector<int> b(a.size());
  for(int ii=0; ii<a.size(); ii++)
    {
      b.resize(a.size()-ii);
      for(int jj=0; jj<b.size(); jj++)
	{
	  b[jj]=a[ii+jj];
	}
      if(1-prime(unvec(b)))
	{
	  return false;
	}
    }

  b.resize(a.size());

  for(int ii=0; ii<a.size(); ii++)
    {
      b.resize(a.size()-ii);
      for(int jj=0; jj<b.size(); jj++)
	{
	  b[jj]=a[jj];
	}
      if(1-prime(unvec(b)))
	{
	  return false;
	}
    }
  return true;
}
