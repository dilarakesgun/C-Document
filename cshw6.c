 #include <stdio.h>
char*first(char*s1,char*s2){
    char*p;
    char*q;
    p=s1;
    q=s2;
    int size_s1=0,extra=0,count=0,inside=0,s2inside=0;
    while(*p!=' '){
        size_s1++;
        p++;
    }
    count=size_s1;
    p-=count;
    
    while(*q!='\0'){
       
        if(*q==' ') q++;
        if(*p==*q){
            inside++;
            s2inside++;
            p++;
            q++;
            while(*q!=' '){
                if(*p==*q){
                    inside++;
                    s2inside++;
                
                }
                else if(*p!=*q){
                    s2inside++;
                    break;
                }
                p++;
                q++;
            }
            if(*q=='\0') s2inside--;
           
            if((inside==size_s1)&&(inside==s2inside)){
                q-=size_s1;
                return q;
            } 
           
               
            
            
        }
        p-=inside;
        q++;
        inside=0;
        s2inside=0;
               
    }
    
   return 0; 
}
int count_of_first(char *s1, char *s2){
    
    int count=0,size_s1=0;
    char*x;
    x=first(s1,s2);
    
    while(x!=0){
       
        if(*x==*s1){
            count++;
           x++;
        } 
        x++;
        x=first(s1,x);
    
    }
   
   
    return count;
    
    
    
}

void print_counts(char *s1, char *s2){
    int i=1,count=0,size=0;
    char*first_occur;
    
    
    while(*s1!='\0'){
        count=count_of_first(s1,s2);
        printf("%c",*s1);
        printf("%d . word count: %d\n",i,count);
       
        while(*s1!=' '){
            s1++;
             if(*s1=='\0') break;
        }
   
        if(*s1==' ') s1++;
        i++;
        
       
}
}




int main()
{
   char s1[20]={"ab cd ef ab "};
   char s2[20]={"ab ef a ef bc ab"};
   char*p,*q,*x;
   p=s1;
   q=s2;
   x=first(p,q);
   printf("%c",*x);
   int y=count_of_first(p,q);
   printf("\ncount %d\n",y);
  print_counts(p,q);
  
    return 0;
}




