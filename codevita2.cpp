#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int  n,i;
	scanf("%d",&n);
    char str[n];
    for(i=0;i<n;i++)
    {
    	scanf("%c",&str[i]);
	}
    int q;
    scanf("%d",&q);
    while(q--)
    {
    	int count=0,p;
    	scanf("%d",&p);
    	
    	
    	for(i=0;i<p;i++)
    	{
    		if(str[i]==str[p])
    		{
			
       		     count++;  
			   
    	    }
    
    	
		}
		printf("%d",count);	
	}

	return 0;
}
