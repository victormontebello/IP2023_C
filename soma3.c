#include <stdio.h>

int main()
{
    long int n1, n2, n3, n4, s;
    
    scanf("%ld", &n1);
    scanf("%ld", &n2);
    scanf("%ld", &n3);
    scanf("%ld", &n4);
    
    
    if(n2>n1 && n2>n3 && n2>n4){
        s = n1 + n3 + n4;
    }
    
    else if(n3>n1 && n3>n2 && n3>n4){
        s = n1 + n2 + n4;
    }
    
    else if(n4>n1 && n4>n2 && n4>n3){
        s = n1 + n2 + n3;
    }
    
    else{
        s = n2 + n3 + n4;
    }
    
    
    printf("%ld\n", s);
    
    return 0;
}
