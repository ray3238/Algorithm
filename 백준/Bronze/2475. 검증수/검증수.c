#include <stdio.h>

int main(){
	int x;
	int ans = 0;
	
	for(int i=0;i<5;i++){
		scanf("%d",&x);
		ans += x*x;
	}
	
	ans %= 10;
	
	printf("%d",ans);
	
	return 0;
}