#include<stdio.h>
static int data[] = { 155, 179, 167, 156, 179, 145, 180, 175, 167, 165, 157, 186, 155, 184, 163, 154, 157, 159, 171, 168, 179, 173, 153, 171, 171, 175, 172, 174, 173, 179, 164, 167, 172, 176, 174, 181, 181, 161, 190, -99 };

static int histo[7];

int main() {
	int i = 0, idx, standard = 150;
	while (data[i] != -99) {
		if (data[i] >= 150 && data[i] < 185) {
			idx = (data[i] - 150) / 5;
			histo[idx]++;
		}
		i++;
	}
	for (i = 0; i < 7; i++) {
		printf("%3d - %3d = %d\n", standard, standard + 4, histo[i]);
		standard += 5;
	}
}