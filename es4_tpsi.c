#include<stdio.h>
#include<math.h>

int main(void){
	double raggio;
	printf("Inserisci lunghezza raggio\n");
	scanf("%lf", &raggio);
	printf("AREA(%lf)          = %lf\n", raggio, AREA(raggio));
	printf("CIRCONFERENZA(%lf) = %lf\n", raggio, CIRCONFERENZA(raggio));
	return 0;
}
