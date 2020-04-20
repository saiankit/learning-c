#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
bool isPalRec(char str[],int s, int e) 
{
	if (s == e) 
	    return true; 
	if (str[s] != str[e]) 
	    return false; 
	if (s < e + 1) 
	    return isPalRec(str, s + 1, e - 1); 
	return true; 
} 

bool isPalindrome(char str[]) 
{ 
int n = strlen(str); 
if (n == 0) 
	return true; 
return isPalRec(str, 0, n - 1); 
}
int main() 
{ 
	char str[50],st[50];int count=0;
    scanf("%[^\n]%*c", str); 
    strcpy(st,str);
    for(int i = 0 ; st[i] ; i++)
        if(st[i]!=' ')
            st[count++] = st[i];
    st[count] = '\0';
	if (isPalindrome(st)) 
	    printf("%s is a Palindrome",str); 
	else
	    printf("%s is not a Palindrome",str); 
	return 0; 
} 

