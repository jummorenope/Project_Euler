#include <iostream>
#include <cmath>
#include <vector>

void factors(unsigned long long int &z, std::vector <int> &a);
bool prime(const int &n);

int main (void)
{
  unsigned long long int n=0;
  std::vector <int> a(1);
  std::cin>>n;
  factors(n,a);
  n=a.size();
  for(int ii=0; ii<n; ii++)
    {
      std::cout<<a[ii]<<std::endl;
    }
  return 0;
}

void factors(unsigned long long int &z, std::vector <int> &a)
{
  int n=0;
  if(z%2==0)
    {
      a.resize(n+1);
      a[n]=2;
      n+=1;
      z=z/2;
    }
  
  for(int ii=3; ii<=z; ii++)
    {
      if((z%ii==0)&&(prime(ii)))
	{
	  a.resize(n+1);
	  a[n]=ii;
	  n+=1;
	  z=z/ii;
	}
      ii+=1;
    }
}

bool prime(const int &n)
{
  int r=std::sqrt(n);
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
