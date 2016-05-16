#include <stdio.h>
#include <string.h>

int main(){
	char a[4], b[3], c[3], d[3], e[4];
	int d1, h1, m1, s1, d2, h2, m2, s2;
	scanf("%s%d", a,&d1);
	scanf("%d%s%d%s%d", &h1,b, &m1,c, &s1);
	scanf("%s%d", a, &d2);
	scanf("%d%s%d%s%d", &h2,b, &m2,c, &s2);
	int dias, m, s, h;
	dias = d2 - d1;
	h = h2 - h1;
	m = m2 - m1;
	s = s2 - s1;
	if (h < 0){
		h += 24;
		dias --;
	}
	if (m < 0){
		m += 60;
	}
	if (s < 0){
		s += 60;
	}
	/*if (d > 0){
		if (h < 24){
			dias --;
		}
	}*/
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, h, m ,s);

	return 0;
}