#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node * next;
}Linklist;

//尾插入法
Linklist * createLinklist2(){
    char x;
    Linklist * head,* p,* q;
    head = (Linklist *)malloc(sizeof(Linklist));
    head->next = NULL;
    q = head;
    printf("please input the values of the list!\n");
    scanf("%c",&x);
    while(x != '\n'){
        p = (Linklist *)malloc(sizeof(Linklist));
        p->data = x;
        p->next = NULL;
        q->next = p;
        q = p;
        scanf("%c",&x);
    }
    return head;
}

//打印
void print(Linklist * head){
    Linklist * p;
    p = head->next;
    while(p != NULL){
        printf("%2c",p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){
	void menu(int o); //??
    Linklist * La;
    Linklist * Lb;
    Linklist * Lc;      //Lc链表中保存的是集合A和集合B的交集
    Linklist * Ld;      //Ld链表中保存的是集合A和集合B的差集
    Linklist * Le;      //Le链表中保存的是集合A和集合B的并集

    Linklist * pa,* pb,* pd;

    Linklist * p,* q;
    int flag1;
    int flag2;

    printf("create La!\n");
    La = createLinklist2();
    printf("\nLa:\n");
    print(La);

    printf("\n");

    printf("create Lb!\n");
    Lb = createLinklist2();
    printf("\nLb:\n");
    print(Lb);

//集合A和集合B的交集
    Lc = (Linklist *)malloc(sizeof(Linklist));
    Lc->next = NULL;
    q = Lc;
    pa = La->next;
    while(pa){
        pb = Lb->next;
        flag1 = 0;
        while(pb){
            if(pa->data == pb->data){
                flag1 = 1;
                break;
            }else{
                pb = pb->next;
            }
        }
        if(flag1 == 1){
            p = (Linklist *)malloc(sizeof(Linklist));
            p->data = pa->data;
            p->next = q->next;
            q->next = p;
            q = p;
        }   
        pa = pa->next;
    }

    printf("A集合和B集合的交集是：");
    print(Lc);


//集合A和集合B的差集
    Ld = (Linklist *)malloc(sizeof(Linklist));
    Ld->next = NULL;
    q = Ld;
    pa = La->next;

    while(pa){
        pb = Lb->next;
        flag2 = 0;
        while(pb){
            if(pa->data == pb->data){
                flag2 = 1;
                break;
            }
            pb = pb->next;
        }
        if(flag2 == 0){
            p = (Linklist *)malloc(sizeof(Linklist));
            p->data = pa->data;
            p->next = q->next;
            q->next = p;
            q = p;  
        }
        pa = pa->next;
    }

    printf("A集合和B集合的差集是：");
    print(Ld);


//集合A和集合B的并集(AUB = (A-B)UB)
    Le = (Linklist *)malloc(sizeof(Linklist));
    Le->next = NULL;
    q = Le;
    pb = Lb->next;
    pd = Ld->next;

    while(pb){
        p = (Linklist *)malloc(sizeof(Linklist));
        p->data = pb->data;
        p->next = q->next;
        q->next = p;
        q = p;
        pb = pb->next;
    }

    while(pd){
        p = (Linklist *)malloc(sizeof(Linklist));
        p->data = pd->data;
        p->next = q->next;
        q->next = p;
        q = p;
        pd = pd->next;
    }

    printf("A集合和B集合的并集是：");
    print(Le);

    return 0;
}


void menu(int o)
{
int i;
for(i=1;i<20;i++) printf(" ");
printf("Menu\n");
printf("IA:Insert into Set A");
for(i=1;i<5;i++) printf(" ");
printf("DA:Delete from Set A\n");
printf("IB:Insert into Set B");
for(i=1;i<5;i++) printf(" ");
printf("DB:Delete from Set B\n");
printf("OU:Union");
for(i=1;i<17;i++) printf(" ");
printf("OI:Intersection\n");
printf("OD:Difference");
for(i=1;i<12;i++) printf(" ");
printf("Q:Quit\n");
printf("Enter Command===>");
}
