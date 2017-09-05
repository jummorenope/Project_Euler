#include <iostream>
#include <cmath>
#include <vector>

int factorial(int n);
void vec(std::vector <int> &a, int z);

int main (void)
{
  std::vector <int> a;
  std::vector <int> b;
  int s=0;
  for(int ii=3;ii<std::pow(10,7); ii++)
    {
      vec(a, ii);
      for(int jj=0; jj<a.size(); jj++)
	{
	  s+=factorial(a[jj]);
	}
      if(ii==s)
	{
	  int h=b.size();
	  b.resize(h+1);
	  b[h]=s;
	}
      s=0;
    }
  for(int ii=0; ii<b.size(); ii++)
    {
      s+=b[ii];
    }
  std::cout<<s<<std::endl;
  return 0;
}

int factorial(int n)
{
  int fact=1;
  if(n==0)
    return 1;
  
  else
    for(int ii=1; ii<=n; ii++)
      {
	  fact*=ii;
      }
  
  return fact;   
}

void vec(std::vector <int> &a, int z)
{
  int p=1, jj=1;
  while(z>=p)
    {
      p*=10;
      jj+=1;
    }
  p=p/10;
  jj-=1;
  a.resize(jj);
  for(int ii=0; ii<jj; ii++)
    {
      a[ii]=(z-z%p)/p;
      z=z%p;
      p=p/10;
    }
}

