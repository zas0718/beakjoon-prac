#include <stdio.h>


int main(){
	
	int num,num2;
	int i,j,k;
	int score[1000]={0};
	int avg;
	int totalscore=0;
	int student;
	double student_total[1000]={0};
	scanf("%d",&num);
	double num3,cnt[num]={0};
	for(i=0; i<num; i++){
		printf("student");
		scanf("%d",&student);
		for(j=0; j<student; j++){
			printf("score");
			scanf("%d",&score[j]);
		}
		num2=0;
		for(num2=0; num2<num; num2++){
			totalscore+=score[num2];
		}
		
		avg=totalscore/num2;
		printf("%d\n", avg);
		for(k=0; k<=num2; k++){
			if(avg<score[k]){
				cnt[k]++;
				printf("%d\n",int(cnt[k]));
			}
			num3=double(num2);
			student_total[i]=(cnt[k]/num3)*100;
			//printf("%d\n",cnt[k]);
			//printf("%.3lf",student_total[i]);
		}
	}
	for(i=0; i<num; i++){
		printf("%.3lf\n",student_total[i]);
	}
	/*
	int time,min,require,time_plus;
	scanf("%d %d %d",&time,&min,&require);
	if(min+require<60){
	printf("%d %d",time, min+require);
	}else{
		time_plus=(min+require)/60;
		
		if(time+time_plus>=24){
			time=time+time_plus-24;
			printf("%d %d",time,min+require-60*time_plus);
		}else{
			printf("%d %d",time+time_plus,min+require-60*time_plus);
		}
	}
	
	
	int num,num2;
	int i,j,k=1;
	scanf("%d",&num);
	num2=num;
	for(i=0; i<=num; i++){
		for(j=num; j>i; j--){
			printf(" ");
		}
		for(k=0; k<2*i-1; k++){
			printf("*");	
		}
		printf("\n");
	}
	*/
	
	
	return 0;
}
