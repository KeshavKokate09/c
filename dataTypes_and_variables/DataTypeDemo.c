// Three are only 5 primitive datatype i.e. char,int,float,double and void
// if the format specifier not matches with datatype, we dont get any error we just get and different value 
//
int printf(const char*,...);

void main(){
	int n=10;
	char c ='A';
	float f = 200.58;
	double d =100.058794561;

	printf("value of int %d\n",n);
	printf("value of char %c\n",c);
	printf("value of float %f\n",f);
	printf("value of double %lf\n",d);

}
