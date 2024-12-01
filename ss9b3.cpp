#include <stdio.h>
int main (){
	int array [100];
	int currentLength=0;
	int n,value,addindex,position,newValue,delindex; 
		printf("nhap so phan tu muon nhap");
		scanf ("%d",&n);
		if(n>100||n<=0){
			printf ("so phan tu khong hop le");
			return 1; 
		} 		
	printf ("nhap cac phan tu :\n");
		for (int i=0;i<n;i++){
			printf ("phan tu thu %d:",i+1);
			scanf ("%d",&array[i]); 
		}
		printf ("nhap gia tri can chen:");
		scanf ("%d",&value);
		printf ("nhap vi tri muon chen:",n+1);
		scanf ("%d",&addindex);
		
	    if (addindex <1||addindex >n+1){
	    	printf ("vi tri khong hop le\n");
			return 1;
		}	
		
		for (int i = n; i >= addindex; i--) {
    array[i] = array[i - 1];
        }
        array [addindex - 1]= value;
		n++;
		printf ("mang sau khi chen :");
		for (int i=0;i<n;i++){
			printf ("%d",array [i]);
		}
		printf ("\n") ;
		int tempindex;
		printf ("vi tri can sua(1-%d): ",n);
		scanf ("%d",&tempindex);
		printf ("nhap gia tri moi: "); 	
		scanf ("%d",&newValue);
		array [tempindex - 1] = newValue;
		 	printf ("mang sau khi chen :");
		for (int i=0;i<n;i++){
			printf ("%d",array [i]); 
		} 
		printf ("\n");
		printf ("nhap vi tri can xoa");
		scanf ("%d",&delindex);
		for (int i=delindex -1;i<n-1;i++){
			array [i]=array [i+1]; 
		} 
		n--;
			printf ("mang sau khi xoa :");
		for (int i=0;i<n;i++){
			printf ("%d",array [i]); 
		} 	 
	return 0; 
} 
