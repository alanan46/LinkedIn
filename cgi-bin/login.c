# include <stdlib.h>
# include <stdio.h>

int main(){
	/*char *data = getenv("QUERY_STRING");
	char name[100], username[100], jobDescription[250];
	sscanf(data, "%s: %s, %s", username, name, jobDescription);
	printf("%s\n%s\n%s", username, name, jobDescription);*/
/*	printf("Content-Type: text/plain;charset=utf-8\n\n");
	printf("\n");
  	printf("Hello world\n\n");*/
    printf("Content-type: text/html\r\n\n");
    printf("Hi from the CGI!\n");
	return 0;
}
