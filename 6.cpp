#include <iostream>
#include <cmath>

int main(void)
{
  int k=0,m=0,n=0;
  std::cin>>k;
  for(int ii=1; ii<=k; ii++)
    {
      m+=ii*ii;
      n+=ii;
    }
  n=n*n;
  std::cout<<(n-m)<<std::endl;
  return 0;
}
