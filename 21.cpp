#include <iostream>
#include <cmath>
#include <vector>

int divisorssum(int n);

int main (void)
{
  std::vector<int> a(9999);
  for(int ii=0; ii<a.size(); ii++)
    {
      a[ii]=divisorssum(ii+1);
    }
  std::cout<<a[219]<<"\t"<<a[283]<<std::endl;
  int s=0;
  for(int ii=0; ii<a.size(); ii++)
    {
      if(a[ii]<10001)
	if((a[a[ii]-1]==ii+1)&&(a[ii]-1!=ii))
	  {
	    s+=ii+1;  
	    std::cout<<a[a[ii]-1]<<"\t"<<a[ii]<<std::endl;
	  }
    }
  std::cout<<s<<std::endl;
  
  return 0;
}

int divisorssum(int n)
{
  int s=0;
  for(int ii=1; ii<=n/2; ii++)
    {
      if(n%ii==0)
	s+=ii;
    }
  return s;
}
