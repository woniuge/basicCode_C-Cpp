#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int i;
	int buf[100];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n);	//使用该重载形式，表明将要使用自己定义的排列规则
		for(i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}