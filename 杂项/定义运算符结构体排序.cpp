#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct E{
	char name[101];
	int age;
	int score;
	bool operator < (const E &b) const{	//利用C++运算符重载直接定义小于运算符
		if(score!=b.score) return score<b.score;
		int tmp=strcmp(name,b.name);
		if(tmp!=0) return tmp<0;
		else return age<b.age;
	}
}buf[1000];

int main(){
	int n;
	int i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%s%d%d",&buf[i].name,&buf[i].age,&buf[i].score);
	}
	sort(buf,buf+n);
	for(i=0;i<n;i++){
		printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
		}
	}
	return 0;
}