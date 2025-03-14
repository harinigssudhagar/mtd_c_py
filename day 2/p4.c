#include <stdio.h> 
int fun(int n) 
{ 
 if (n == 0) 
      return 1; 
 return 2 * fun(n - 1); 
} 
int main() {
printf("%d", fun(4)); 
 return 0; 
}  
        
