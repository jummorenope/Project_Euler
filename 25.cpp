#include <iostream>
#include <cmath>
#include <vector>
#include "lib.h"

void fibonacci(std::vector<short int> &a, std::vector<short int> &b, std::vector<short int> &c, int k);

int main (void)
{
  std::vector<short int> a{1};
  std::vector<short int> b{1};
  std::vector<short int> c{0};
  int k=1, max=1000;

  for(k=1; k<=15; k++)
    {
      fibonacci(a,b,c,k);
      
      if(k%3==0)
	for(int ii=c.size()-1; ii>=0; ii--)
	  std::cout<<c[ii];
      
      if(k%3==1)
	for(int ii=a.size()-1; ii>=0; ii--)
	  std::cout<<a[ii];
      
      if(k%3==2)
	for(int ii=b.size()-1; ii>=0; ii--)
	  std::cout<<b[ii];

      std::cout<<"\t"<<k<<"\n";
      std::cout<<a.size()<<"\t"<<b.size()<<"\t"<<c.size()<<std::endl;      

      if((a.size()==max)||(b.size()==max)||(c.size()==max))
	{
	  break;
	}

    }
  
  return 0;
}


void fibonacci(std::vector<short int> &a, std::vector<short int> &b, std::vector<short int> &c, int k)
{
  if(k%3==0)
    {
      if((a.size()>=c.size())&&(a.size()>=b.size()))
	{
	  c.resize(a.size());
	  b.resize(a.size());
	}
      
      if((b.size()>=c.size())&&(b.size()>=a.size()))
	{
	  c.resize(b.size());
	  a.resize(b.size());
	}
      
      for(int ii=0; ii<c.size(); ii++)
	c[ii]=a[ii]+b[ii];
      

      if(c[c.size()-1]>9)
	c.resize(c.size()+1);

      for(int ii=0; ii<c.size(); ii++)
	if(c[ii]>9)
	  {
	    c[ii+1]+=1;
	    c[ii]-=10;
	  }
    }
  
  if(k%3==1)
    {
      if((b.size()>=a.size())&&(b.size()>=c.size()))
	{
	  a.resize(b.size());
	  c.resize(b.size());
	}
      
      if((c.size()>=a.size())&&(c.size()>=b.size()))
	{
	  a.resize(c.size());
	  b.resize(c.size());
	}
      
      for(int ii=0; ii<a.size(); ii++)
	a[ii]=b[ii]+c[ii];

      if(a[a.size()-1]>9)
	a.resize(a.size()+1);

      for(int ii=0; ii<a.size(); ii++)
	if(a[ii]>9)
	  {
	    a[ii+1]+=1;
	    a[ii]-=10;
	  }
    }

  if(k%3==2)
    {
      if((c.size()>=b.size())&&(c.size()>=a.size()))
	{
	  b.resize(c.size());
	  a.resize(c.size());
	}
      
      if((a.size()>=b.size())&&(a.size()>=c.size()))
	{
	  b.resize(a.size());
	  c.resize(a.size());
	}
      
      for(int ii=0; ii<b.size(); ii++)
	b[ii]=c[ii]+a[ii];

      if(b[b.size()-1]>9)
	b.resize(b.size()+1);

      for(int ii=0; ii<b.size(); ii++)
	if(b[ii]>9)
	  {
	    b[ii+1]+=1;
	    b[ii]-=10;
	  }
    }  
}

