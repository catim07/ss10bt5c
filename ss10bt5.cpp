#include<stdio.h>
int main(){
	int array[]={31,0,7,2,6,9,3,26};
	int size=sizeof(array)/sizeof(array[0]);
	int right=size-1,left=0,mid,check,temp,examin=-1;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("moi ban nhap so de tim kiem: ");
	scanf("%d",&check);
	while(left<=right){
	
	mid=(left+right)/2;
	if(array[mid]==check){
		examin=mid;
		break;
}else if(array[mid]<check){
	left=mid+1;
}else{
	right=mid-1;
}
	}
	if(examin!=-1){
		printf("phan tu %d nam o vi tri %d",check,examin);
	}else{
		printf("phan tu ko co trong mang");
	}
	return 0;
}

