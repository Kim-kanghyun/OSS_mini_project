#include "product.h"

int selectMenu(){
int menu;
 printf("\n*** 과일판매기 ***\n");
 printf("1. 조회\n");
 printf("2. 추가\n");
 printf("3. 수정\n");
 printf("4. 삭제\n");
 printf("5. 저장\n");
 printf("0. 종료\n\n");
 printf("=> 원하는 메뉴는? ");
 scanf("%d", &menu);
return menu;
}

int createProduct(Product *s1){
    printf("제품 이름은? ");
    scanf("%s",s1->productName);
    printf("무게는? ");
    scanf("%d",&s1->weight);
    printf("가격은? ");
    scanf("%d",&s1->price);
    printf("별점은? ");
    scanf("%f",&s1->starScore);
    printf("별개수는? ");
    scanf("%d",&s1->numStar);
    printf("=> 추가됨!");
    return 1;
}

void readProduct(Product s){
    printf("\t%s\t%d\t%d\t%.1f\t%d\n",s.productName,s.weight,s.price,s.starScore,s.numStar);
}

int updateProduct(Product *s1){
    printf("제품 이름은? ");
    scanf("%s",s1->productName);
    printf("무게는? ");
    scanf("%d",&s1->weight);
    printf("가격은? ");
    scanf("%d",&s1->price);
    printf("별점은? ");
    scanf("%f",&s1->starScore);
    printf("별개수는? ");
    scanf("%d",&s1->numStar);
    printf("=> 추가됨!");
    return 1;
}

int deleteProduct(Product *s){
 s->weight = -1;
 s->price = -1;
 s->numStar = -1;
 s->starScore=-1;
return 1;
}

