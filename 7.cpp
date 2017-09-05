#include <iostream>
#include <cmath>

bool prime(int &n);
void bucle();

int main (void)
{
  bucle();
  return 0;
}

bool prime(int &n)
{
  int r=std::sqrt(n);
  if(n==1)
    return false;
  
  if((n%2==0)&&(n!=2))
    return false;

  for(int ii=3; ii<=r; ii++)
    {
      if(n%ii==0)
	return false;
      ii+=1;
    }
  return true;
}

void bucle()
{
  int k=10001, n=0, ii=1;
  while(n<k)
    {
      if(prime(ii))
	{
	  n+=1;
	  std::cout<<n<<"\t"<<ii<<std::endl;
	}
      ii=ii+1;
    }
}
