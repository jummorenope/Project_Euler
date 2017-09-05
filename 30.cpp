#include <iostream>
#include <cmath>
#include <vector>

void vec(std::vector <int> &a, int z);
int  digitsum(std::vector <int> &a);
bool compare(std::vector <int> &a, std::vector <int> &b);

int main(void)
{
  int ss=0;
  for(int ii=2; ii<=9999999; ii++)
    {
      std::vector <int> a;
      std::vector <int> b;
      vec(a,ii);
      vec(b,digitsum(a));
      if(compare(a,b))
	ss+=ii;
    }
  std::cout<<ss<<std::endl;
  return 0;

}

void vec(std::vector <int> &a, int z)
{
  int p=1, jj=1;
  while(z>=p)
    {
      p*=10;
      jj+=1;
    }
  p=p/10;
  jj-=1;
  a.resize(jj);
  for(int ii=0; ii<jj; ii++)
    {
      a[ii]=(z-z%p)/p;
      //      std::cout<<z<<std::endl;
      z=z%p;
      p=p/10;
    }
  //  std::cout<<"\n"<<"fin vec"<<"\n";
}

int digitsum(std::vector <int> &a)
{
  int s=0;
  for(int ii=0; ii<a.size(); ii++)
    {
      s+=std::pow( a[ii], 5);
      //  std::cout<<s<<std::endl;
    }
  
  return s;
}

bool compare(std::vector <int> &a, std::vector <int> &b)
{
  if(a.size()!=b.size())
    return false;
  
  for(int ii=0; ii<a.size(); ii++)
    {
      if(a[ii]!=b[ii])
	{
	  return false;
	}
    }
  return true;
}
