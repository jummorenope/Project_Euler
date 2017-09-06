#include "lib.h"

bool is_it_solution(int a, int b, int ii);

int main (void)
{
  int kl=0;
  int k=0;
  int n=0;
  for(int ii=12; ii<=1000; ii++)
    {
      kl=0;
      for(int a=1; a<ii; a++)
	{
	  for(int b=1; b<a; b++)
	    {
	      if(is_it_solution(a,b,ii))
		{
		  kl+=1;
		  break;
		}
	    }
	}
      
      if(kl>k)
	{
	  k=kl;
	  n=ii;
	  std::cout<<k<<"\t"<<n<<std::endl;
	}
    }
  return 0;
}

bool is_it_solution(int a, int b, int ii)
{
  int c=std::sqrt(a*a+b*b);

  if((a*a+b*b==c*c)&&(a+b+c==ii))
    return true;
  
  else
    return false;
}
