#include <iostream>
#include <cmath>

int main (void)
{
  long int k=std::pow(10,10);
  long int s=0, st=1;
  for(int ii=1; ii<=1000; ii++)
    {
      for(int jj=1; jj<=ii; jj++)
	{
	  st=st*ii;
	  st=st%k;
	}
      s+=st;
      s=s%k;
      st=1;
    }
  std::cout<<s<<std::endl;
  return 0;
}
