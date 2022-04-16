#include<string.h>
#include<stdio.h>
typedef struct 
{
    char productName[20];
    int weight;
    int price;
    float starScore;
    int numStar;
    int method;
}Product;

int selectMenu(); // 메뉴생성 함수
int createProduct(Product *p); //제품 생성 함수
void readProduct(Product p);  // 제품 읽는 함수
int updateProduct(Product *p); //제품을 불러오는 함수
void saveData(Product *p, int count); //제품내용을 파일로 저장하는 함수
int loadData(Product *p); // 파일에 저장되있던 내용을 로드하는 함수
int deleteProduct(Product *s); // 제품을 삭제하는 함수
void searchName(Product *p[], int count); //제품 이름을 검색하는 함수
void searchPrice(Product *p[], int count); //제품 가격을 검색하는 함수
void searchStar(Product *p[], int count); // 제품 별점을 검색하는 함수
