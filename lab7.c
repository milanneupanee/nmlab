//Implemanatation of Gauss Jacobis method using c
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
float  fx(float x,float y ,float z){
	x=(17-y+2*z)/20;
	return x; 
	
}
float  fy(float x,float y, float z){
	y=(-18-3*x+z)/20;
	return y; 
	
}
float   fz(float x,float y, float z){
	z=(25+3*y-2*x)/20;
	return z; 
	
}
int main(){
	float e=0.001;
	float x=0,y=0,z=0;
	float ex,ey,ez;

	do
	{
	ex=fabs(x-fx(x,y,z));
	ey=fabs(y-fy(x,y,z));
	ez=fabs(z-fz(x,y,z));
	x=fx(x,y,z);
	y=fy(x,y,z);
	z=fz(x,y,z);
	}
		while (ex>e&&ey>e&&ez>e);

	printf("The value of x=%f\n y=%f\n z=%f\n",fx(x,y,z),fy(x,y,z),fz(x,y,z));
	return 0;
	
}
