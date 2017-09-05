#include <iostream>
#include <cmath>

void pythagorean(void);

int main (void)
{
  pythagorean();
  return 0;
}

void pythagorean(void)
{
  int a,b,c;
  for(c=0; c<1000; c++)
    {
      for(b=0; b<c; b++)
	{
	  for(a=0; a<b; a++)
	    {
	      if((a*a+b*b==c*c)&&(a+b+c==1000))
		break;	
	    }
	  if((a*a+b*b==c*c)&&(a+b+c==1000))
	    break;
	}
      if((a*a+b*b==c*c)&&(a+b+c==1000))
	break;
    }
  
  std::cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<a*b*c<<std::endl;
}
