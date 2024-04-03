#include <stdio.h>
#include <string.h>
struct Book {
	int book_id;
	char title[50];
	char author[50];
	int ISBN;
};
int main(){
	int n;
	printf("Enter the numbers of books: ");
	scanf("%d",&n);
	struct Book books[n];
	for(int i=0;i<n;i++){
		printf("-----For Book %d-----\n",i+1);
		printf("Enter the Book ID: ");
		scanf("%d",&books[i].book_id);
		printf("Enter the Book Title: ");
		scanf(" %[^\n]s",books[i].title);
		//gets();
		//gets(books[i].title);
		printf("Enter the Book author: ");
		scanf(" %[^\n]s",books[i].author);
		//gets(books[i].author);
		printf("Enter the Book ISBN: ");
		scanf("%d",&books[i].ISBN);
	}
	for(int i=0;i<n;i++){
	printf("\n----The Book %d Data\nID: %d\nTitle: %s\nAuthor: %s\nISBN: %d\n----",i+1,books[i].book_id,books[i].title
		,books[i].author,books[i].ISBN);
	}
return 0;
}
