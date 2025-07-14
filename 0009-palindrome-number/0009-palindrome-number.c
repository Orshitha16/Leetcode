bool isPalindrome(int x) {
    int r,m,i;
    long s;
    char*c;
    c=(char*)malloc(20*sizeof(char));
    s=0;
     if(x>0)
      {
       m=x;
       while(x)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
    }
      }
      else
      {
        i=0;
        while(*(c+i)!='\0')
        {
        *(c+i)=x+i;
        i++;
        *(c+i)='\0';
         m=atoi(c);
        }
      while(x)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
    }

      }
    
   
 
    if(s==m)
    return 1;  
    else 
    return 0;
} 
