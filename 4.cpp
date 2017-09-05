#include <iostream>
#include <cmath>
#include <vector>

bool palindrome(const std::vector<int> &a);
bool vec(int n, std::vector <int> &a);
void bucle();

int main (void)
{
  bucle();
  return 0;
}

bool palindrome(const std::vector<int> &a)
{
  int k=a.size();
  for(int ii=0; ii<(k/2); ii++)
    {
      if(a[ii]!=a[k-ii-1])
	{
	  return false;
	}
    }
  return true;
}

bool vec(int n, std::vector <int> &a)
{
  int p=1, jj=1;
  while(p<=n)
    {
      p=p*10;
      jj+=1;
    }
  p=p/10;
  jj-=1;
  a.resize(jj);
  for(int ii=0; ii<jj; ii++)
    {
      a[ii]=(n-n%p)/p;
      n=n%p;
      p=p/10;
    }
  return palindrome(a);
}

void bucle()
{
  int p=2,n=0;
  std::vector<int> a;

  for(int ii=100; ii<1000; ii++)
    {
      for(int jj=100; jj<1000; jj++)
	{
	  n=ii*jj;
	  if(vec(n, a))
	    {
	      if(p<n)
		{
		  p=n;
		}
	    }
	}
    }
  std::cout<<p<<std::endl;
}
