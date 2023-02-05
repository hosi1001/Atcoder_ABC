#include <stdio.h>
#include <stdlib.h>
double mean( int a[], int n );
// double ave  = 0.0;
int main(void)
{
	int no; /* 配列の要素数 */
	int *p;
    // double ave =0.0;
	printf("確保する配列の要素数:");
	scanf("%d", &no); /* int型整数no個の配列を動的に確保 */
	p = (int *)calloc(no, sizeof(int));
	if (p == NULL)
		puts("記憶域の確保に失敗しました。");
	else
	{
		int i;
		FILE *fp;
		int a;
		fp = fopen("rand10000.csv", "r"); // ファイルrand1000.csvのオープン
		while (fscanf(fp, "%d", &a) == 1 && i < no) // fopen の戻り値は読み取りに成功した項目の個数
		{
			p[i] = a;
			i++;
		}
		for (int i = 0; i < no; i++){
			printf("p[%d] = %d\n", i, p[i]);
            } //debug
		double ave =0.0;
		// for(int i = 0 ; i < no ; i++){
		// 	ave += p[i];
		// }
        // ave /= no;
		// printf("average = %lf\n" ,ave);
		// printf("average = %lf\n" ,mean(p , no));
		free(p); /* 確保していた領域を解放 */
	}
	return 0;
}


// double mean( int a[], int n )
// {
// int i;
// double avg = 0.0;
// for( i = 0 ; i < n ; i++ ){
// avg += a[i]; // avg = avg + a[i];
// }
// avg /= n;
// return avg;
// }