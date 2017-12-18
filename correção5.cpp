double funcao5 (int mat[][COL], int c, int l)
{
	int mlinha, mcoluna;
	double soma;
	int i, j, contap;
	for(i=0; i<l; i++){
		mlinha=mat[l][0];
		for(j=0; j<c; j++){
			if (mat[i][j]>mlinha){
				mlinha=mat[i][j];
			}
		}
		printf("Maior da linha %i e %i\n", i, mlinha);
	}
	contap=o;
	soma=0;
	for(j=0; j<c; j++){
		mcoluna=mat[0][j];
		for(i=0; i<l; ++){
			if (mat[i][j]>mcoluna){
				mcoluna=mat[i][j];
			}
			if(mat[i][j]>=0){
				contap=contap+1;
				soma=soma+mat[i][j];
			}
		}
		printf("Maior da coluna %i e %i\n",j,mcoluna)
	}
	return(soma/contap);
}
