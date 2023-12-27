//Trapzedual rule and simphson 1/3 and 3/8 rule
//Trapezedual rule
#include<stdio.h>
float input(float x){
	return 1/(1+x*x);
}
float height(float a,float b,float n){
	return (b-a)/n;
}
int main(){
	float a,b,n;
	float sumi=0,totalsum=0,y[10];
	printf("Enter the n");
	scanf("%f",&n);
	printf("Enter the a and b");
	scanf("%f%f",&a,&b);
	float y1=input(a);
	float yn=input(b);
	float h=height(a,b,n);
	float sum=y1+yn;
	for (int i=1;i<=n-1;i++){
		y[i]=a+h*i;
		float sumi=sumi+2*input(y[i]);
		totalsum=(h/2*(sum+sumi));
	}
	printf("The value of intergation is %f",totalsum);
	return 0;
}

