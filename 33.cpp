#include <iostream>
#include <cmath>
#include <vector>

void vec(std::vector <double> &a, int z);
double cancel(std::vector <double> a, std::vector <double> b);

int main(void)
{
  std::vector <double> a{0,0};
  std::vector <double> b{0,0};
  for(int ii=2.0; ii<100; ii++)
    {
      for(int jj=1.0; jj<ii; jj++)
	{
	  vec(a,ii);
	  vec(b,jj);
	  
	  if(cancel(a,b)==jj/ii)
	    {
	      std::cout<<ii<<"\t"<<jj<<"\t"<<cancel(a,b)<<"\t"<<jj/ii<<std::endl;
	    }
	}
    }
  return 0;
}

void vec(std::vector <double> &a, int z)
{
    int p=1, jj=1;
  while(z>=p)
    {
      p*=10;
      jj+=1;
    }
  p=p/10;
  jj-=1;
  for(int ii=0; ii<jj; ii++)
    {
      a[ii]=(z-z%p)/p;
      z=z%p;
      p=p/10;
    }
}

double cancel(std::vector <double> a, std::vector <double> b)
{
  double d=0,as=0,bs=0;
  for(int ii=0; ii<2; ii++)
    {
      if(a[0]==b[ii])
	{
	  a[0]=0;
	  b[ii]=0;
	}
      if(a[1]==b[ii])
	{
	  a[1]=0;
	  b[ii]=0;
	}
    }
  for(int ii=0; ii<2; ii++)
    {
      as+=std::pow(10,ii)*a[ii];
      bs+=std::pow(10,ii)*b[ii];
    }
  d=bs/as;
  return d;
}
