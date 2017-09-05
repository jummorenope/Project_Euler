#include <iostream>
#include <cmath>
#include <vector>

bool prime(long int n);

int main (void)
{
  unsigned long long int s=2;
  for(long int ii=3; ii<2000000; ii++)
    {

      if(prime(ii))
	{
	  s+=ii;
	  std::cout<<s<<std::endl;
	}
      ii+=1;

    }
  std::cout<<s<<std::endl;
  return 0;
}

bool prime(long int n)
{
  int r=std::sqrt(n);

  if(n==1)
    return false;

  if((n%2==0)&&(n!=2))
    return false;

  else
    for(int ii=3; ii<=r; ii++)
      {
	if(n%ii==0)
	  return false;
	ii+=1;
      }
  return true;
}
