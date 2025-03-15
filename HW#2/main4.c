#include <bits/stdc++.h> 

typedef struct Books
{
    int id;
    int price;
    char title[40];
} book_t;

void total_price(book_t bk[])
{
    int sum = 0;
    for (int i = 0; i<6; i++)
    {
        sum=sum+bk[i].price;
    }
    printf("%d", sum);
}

void list_books(book_t bk[], int p)
{
    printf("%d %s", bk[p-1].price, bk[p-1].title);
}

book_t bk[] = {
    {1, 1000, "All the Light We Cannot See"},
    {2,  300, "The 38 Letters from J.D. Rockefeller to his son"},
    {3, 1000, "The Ballad of Songbirds and Snakes"},
    {4,  550, "Killers of the Flower Moon"},
    {5,  870, "Elon Musk"},
    {6, 1344, "Milk and Honey 12-Month 2024"}
};


int main()
{
    int p;
    scanf("%d", &p);

    if (p == 0)
    {
        total_price(bk);  
    }
    else 
    {
        list_books(bk, p); 
    }
    
    return 0;
}


Description

請寫一支書單程式，建立結構 (struct) 儲存以下書籍資料：

Id (int)	Price (int)	Title (string)
1	1000	All the Light We Cannot See
2	300	The 38 Letters from J.D. Rockefeller to his son
3	1000	The Ballad of Songbirds and Snakes
4	550	Killers of the Flower Moon
5	870	Elon Musk
6	1344	Milk and Honey 12-Month 2024
並設計演算法：

當輸入「0」時，有一個獨立函式計算上面書籍的總價格（1000+300+...+1344）
當輸入「1-6」時，有一個獨立函式依據數字輸出其編號代表的書籍資料

Input

使用 scanf() 函式接收輸入。


Output

使用printf()輸出
