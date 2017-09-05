+*#include <iostream>
#include <cmath>
#include <vector>

bool prime(int &n);

int main (void)
{
  bool z=false;
  for(int ii=9; ii>0; ii++)
    {
      if(prime(ii))
	{
	  for(int jj=3; jj<=ii-2; jj++)
	    {
	      if(1-prime(jj))
		{
		  int k=ii-jj, r=0;
		  if(k%2==0)
		    {
		      k=k/2;
		      r=std::sqrt(k);
		      if(k==r*r)
			{
			  z=true;
			  std::cout<<ii<<"\t"<<jj<<"\t"<<r<<std::endl;
			  break;
			}
		    }
		  
		}
	    }
	}
      
      if((z)||(1-prime(ii)))
	{}
      
      else
	{
	  std::cout<<ii<<std::endl;
	  break;
	}
     	
      z=false;
      ii+=1;
    }
  return 0;
}

bool prime(int &n)
{
  int r=std::sqrt(n);
  if(n==1)
    return true;

  if((n%2==0)&&(n!=2))
    return true;

  for(int ii=3; ii<=r; ii++)
    {
      if(n%ii==0)
        return true;

      ii+=1;
    }
  return false;
}
