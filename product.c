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
    printf("배송 방법은? (새벽배송:1, 택배배송:2)");
    scanf("%d",&s1->method);
    printf("=> 추가됨!");
    return 1;
}

void readProduct(Product s){
    if(s.method==1)
	printf("\t%s\t%d\t%d\t%.1f\t%d\t새벽배송\n",s.productName,s.weight,s.price,s.starScore,s.numStar);
    if(s.method==2)
	printf("\t%s\t%d\t%d\t%.1f\t%d\t택배배송\n",s.productName,s.weight,s.price,s.starScore,s.numStar);
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
    printf("배송 방법은? (새벽배송:1, 택배배송:2)");
    scanf("%d",&s1->method);
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

void saveData(Product *p, int count){
	FILE *fp;
	fp=fopen("product.txt","wt");

	for(int i=0; i<count; i++){
		fprintf(fp,"%s %d %d %.1f %d %d\n",p[i].productName,p[i].weight,p[i].price,p[i].starScore,p[i].numStar,p[i].method);
		fclose(fp);
		printf("=> 저장됨! ");
	}
}

int loadData(Product *p){
	int i = 0;
	FILE *fp;
	fp = fopen("product.txt", "rt");
	for(; i < 100; i++){
		fscanf(fp,"%s",p[i].productName);
    		fscanf(fp,"%d",&p[i].weight);
    		fscanf(fp,"%d",&p[i].price);
    		fscanf(fp,"%f",&p[i].starScore);
    		fscanf(fp,"%d",&p[i].numStar);
    		fscanf(fp,"%d",&p[i].method);
		if(feof(fp)) break;
	}
	fclose(fp);
	if (i>0)printf("=> 제품 로딩 성공!\n");
	else printf("=> 객실 파일 없음\n");
	return i;
}
