#include <iostream>
#include <cmath>
#include <vector>

int number(long long int z);
bool prime(int z);

int main (void)
{
  int k=0;
  for(long long int ii=0; ii>=0; ii++)
    {
      k+=ii;
	  std::cout<<k<<"\t"<<number(k)<<std::endl;
      if(k>=62370000)
	{
	  if(number(k)>=500)
	    {
	      std::cout<<k<<std::endl;
	      break;
	    }

	}
    }
  return 0;
}

int number(long long int z)
{
  int jj=0;
  int r=std::sqrt(z);
  for(int ii=1; ii<=r; ii++)
    {
      if(z%ii==0)
	{
	  if(z/ii!=ii)
	    {
	      jj+=1;
	    }
	  jj+=1;
	}
      
    }
  return jj;
}
