#include <stdio.h>

struct driver
{
    char name[44];
    int dr_lic_NO;
    char root[22];
    int kms;
};
struct driver D1 , D2, D3, D4;

void input_data()
{
    printf("enter driver name : ");
    scanf("%s", &D1.name);
    printf("enter driver name : ");
    scanf("%s", &D2.name);
    printf("enter driver name : ");
    scanf("%s", &D3.name);
    printf("enter driver name : ");
    scanf("%s", &D4.name);

    printf("enter driving licence NO : ");
    scanf("%d", &D1.dr_lic_NO);
    printf("enter driving licence NO : ");
    scanf("%d", &D2.dr_lic_NO);
    printf("enter driving licence NO : ");
    scanf("%d", &D3.dr_lic_NO);
    printf("enter driving licence NO : ");
    scanf("%d", &D4.dr_lic_NO);

    printf("enter the route : ");
    scanf("%s", &D1.root);
    printf("enter the route : ");
    scanf("%s", &D2.root);
    printf("enter the route : ");
    scanf("%s", &D3.root);
    printf("enter the route : ");
    scanf("%s", &D4.root);

    printf("enter traveling kms : ");
    scanf("%d", &D1.kms);
    printf("enter traveling kms : ");
    scanf("%d", &D2.kms);
    printf("enter traveling kms : ");
    scanf("%d", &D3.kms);
    printf("enter traveling kms : ");
    scanf("%d", &D4.kms);
}

void print_data()
{
    
    printf("Driver name :%s\n", D1.name);
    printf("driving lic_no : %d\n", D1.dr_lic_NO);
    printf("raute : %s\n", D1.root);
    printf("traveling kms : %d\n", D1.kms);


    printf("Driver name : %s\n",D2.name);
    printf("driving lic_no : %d\n", D2.dr_lic_NO);
    printf("route : %s\n", D2.root);
    printf("traveling kms : %d\n", D2.kms);

    printf("Driver name : %s\n", D3.name);
    printf("driving lic_no : %d\n", D3.dr_lic_NO);
    printf("route : %s\n", D3.root);
    printf("driving kms : %d\n", D3.kms);
    
    printf("Driver name : %s\n", D4.name);
    printf("driving lic_no : %d\n", D4.dr_lic_NO);
    printf("route : %s\n", D4.root);
    printf("taveling kms : %d\n", D4.kms);
}

int main()
{
    input_data();
    print_data();
    return 0;
}