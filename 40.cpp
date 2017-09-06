#include "lib.h"

int main (void)
{
  int power=0, previous=0;
  std::vector <int> a, b;
  int last=1.0e6;
  for(int ii=1; a.size()<last; ii++)
    {
      power=std::log10(ii)+1;
      previous=a.size();
      a.resize(a.size()+power);
      b.resize(power);
      vec(b,ii);
      for(int jj=0; jj<power; jj++)
	{
	  a[previous+jj]=b[jj];
	}
    }
  int result=1;
  for(int ii=0; pow(10,ii)<last; ii++)
    {
      result*=a[std::pow(10,ii)-1];
    }
  std::cout<<result<<std::endl;
  return 0;
}
