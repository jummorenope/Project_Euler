#include <iostream>
#include <cmath>
#include <vector>

int main (void)
{
  std::vector <int> a{1};
  int s=0;
  for(int z=1; z<=100; z++)
    {
      s=0;
      for(int kk=0; kk<a.size(); kk++)
	{
	  a[kk]=a[kk]*z;
	}
      
      for(int jj=0; jj<a.size(); jj++)
	{
	  if(a[jj]>=10)
	    {
	      if(jj+1==a.size())
		{
		  a.resize(jj+2);
		  a[jj+1]=(a[jj]-a[jj]%10)/10;
		  a[jj]=a[jj]%10;
		}
	      else
		{
		  a[jj+1]+=(a[jj]-a[jj]%10)/10;
		  a[jj]=a[jj]%10;
		}
	    }
	}
      
      for(int ii=0; ii<a.size(); ii++)
	{
	  std::cout<<a[a.size()-1-ii];
	  s+=a[ii];
	}
      std::cout<<std::endl;
    }
  std::cout<<s<<std::endl;
  return 0;
}
