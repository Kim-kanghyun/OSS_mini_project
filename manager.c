#include"manager.h"

void listProduct(Product *slist, int count){
 printf("\nNo\tName\tweight\tprice\tStar Score\tNumber of stars\n");
 printf("====================================================\n");
 for(int i =0; i <count ; i++){
     if(slist[i].weight == -1)
     continue;
     printf("%2d ", i+1);
     readProduct(slist[i]);
     }
 printf("\n");
}

int selectDataNum(Product *s, int count){
 int num;
 listProduct(s, count);
 printf("번호는 (취소 :0)? ");
 scanf("%d", &num);
 return num;
}
