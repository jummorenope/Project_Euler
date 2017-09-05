#include <iostream>
#include <cmath>
#include <vector>

bool prime(const int &n);
void primes(std::vector <int> &a, int &n);
void power(std::vector <int> &a, int &n, int &m);

int main (void)
{
  int z=0, m=1;
  std::cin>>z;
  std::vector <int> a;
  primes(a,z);
  power(a,z,m);
  return 0;
}

void primes(std::vector <int> &a, int &n)
{
  int m=0;
  for(int ii=2; ii<=n; ii++)
    {
      if(prime(ii))
	{
	  a.resize(m+1);
	  a[m]=ii;
	  m+=1;
	}
    }
}

bool prime(const int &n)
{
  int r=std::sqrt(n);
  if(n==2)
    {
      return true;
    }
  if(n%2==0)
    return false;

  for(int ii=3;ii<=r;ii++)
    {
      if(n%ii==0)
        return false;
      ii+=1;
    }

  return true;
}

void power(std::vector <int> &a, int &n, int &m)
{
  int k=a.size(), p=0;
  for( int ii=0; ii<k; ii++)
    {
      p=a[ii];
      while(p<=n)
	{
	  p=p*a[ii];
	}
      p=p/a[ii];
      m=p*m;
    }
  std::cout<<m<<std::endl;
}
