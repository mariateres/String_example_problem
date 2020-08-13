 #include <stdio.h>
 int main() { 
	char str[60];
	scanf("%s", str); 
	int i=0;
	while(str[i] !='\0') { 
	if(str[i]!='_'){ 
		printf("%c", str[i]);
 		i++;
		} 
	else {
		printf(",");
		i++;
		} 
	} 
	return 0; 
}