#include <stdio.h>

int main () {

	float radius, fläche, umfang;

	printf("Geben Sie den Radius des Kreises ein:\n");
	scanf("%f", &radius);

	umfang = radius * 2 * 3.141593;
	fläche = radius * radius * 3.141593;

	printf("Der Umfang des Kreises beträgt %f.\n", umfang);
	printf("Der Flächeninhalt des Kreises beträgt %f.\n", fläche);

	return 0;

}
	
