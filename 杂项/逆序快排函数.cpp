#include <stdio.h>
#include <algorithm>
using namespace std;

bool cmp(int x,int y){	//定义排序规则
	return x>y;
}

int main(){
	int n;
	int i;
	int buf[100];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);	//使用该重载形式，我们表明将要使用自己定义的排列规则
		for(i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}
