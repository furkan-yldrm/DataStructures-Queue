#include <stdio.h>
#include<stdlib.h>
#define SIZE 50

void enqueue();     //Kuyruða eleman ekleme
void dequeue();     //Kuyruktan eleman silme
void yazdir();      // Kuyruðu göster
int dizi[SIZE];
int rear = 0;
int front = 0;

int main()
{
    int secim;
    while (1)
{
    printf("\nKuyruga eleman eklemek icin 1'e basin.\n");
    printf("Kuyruktan eleman silmek icin 2'ye basin.\n");
    printf("Tum elemanlari gormek icin 3'e basin.\n");
    printf("Seciminiz : \n");
    scanf("%d", &secim);

    if(secim==1)
    {
    enqueue();
    }
    else if (secim==2)
    {
    dequeue();
    }
    else if (secim==3)
    {
    yazdir();
    }
    else
    {
    printf("Yanlis secim yaptiniz.Tekrar deneyin.");
    }
}
}
void enqueue()
{
    int n;
    if(rear == SIZE - 1)
       {
       printf("Kuyruk bos!!!!!");
       }
    else
    {
    if(front== 0)
    front = 1;
    printf("Eleman girin :  ");
    scanf("%d", &n);
    rear = rear + 1;
    dizi[rear] = n;
    }
}
    void dequeue()
{
    if(front == 0 || front > rear)
     {
        printf("Kuyruk bos!!!!");

     }
    else
{
    printf("Kuyruktan silinen eleman : %d", dizi[front]);
    front = front + 1;
}
}
void yazdir()
{
    if(front == 0)
        {
        printf("Kuyruk bos!!!");
        }
    else
{
    printf("\n");
    for(int i = front; i <= rear; i++)
    printf(" %d -", dizi[i]);
}
}
