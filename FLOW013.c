#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d\t %d\t %d\t",&a,&b,&c);
	    if(a+b+c == 180){
	    printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	
	return 0;
}

