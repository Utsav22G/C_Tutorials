#include <stdio.h>

typedef union {
	double weight;
	double size;
	char color[10];
}Description;

typedef struct {
	int ino;
	char iname[20];
	Description d;
	char dtype;
	double price;
}Item;

void inputItem(Item *iptr) {
	printf("Enter item number: ");
	scanf(" %d", &iptr->ino);
	printf("Enter item name: ");
	scanf(" %[^\n]", iptr->iname);
	printf("Enter price: ");
	scanf(" %lf", &iptr->price);

	printf("Weight/ Size/ Color? w for weight, s for size, c for color: ");
	scanf(" %c", &iptr->dtype);

	if (iptr->dtype == 'w') {
		printf("Enter weight: ");
		scanf(" %lf", &iptr->d.weight);
	}
	else if (iptr->dtype == 's') {
		printf("Enter size: ");
		scanf(" %lf", &iptr->d.size);
	}
	else {
		printf("Enter color: ");
		scanf(" %[^\n]", iptr->d.color);
	}
}

void printItem(Item item) {
	printf("\nPrinting item information: \n");
	printf("Item number: %d\n", item.ino);
	printf("Item name: %s\n", item.iname);
	printf("Item price: %lf\n", item.price);

	if (item.dtype == 'w')
		printf("Item weight: %lf\n", item.d.weight);
	else if (item.dtype == 's')
		printf("Item size: %lf\n", item.d.size);
	else
		printf("Item color: %s\n", item.d.color);
}

int main() {
	Item item;
	
	inputItem(&item);
	printItem(item);

	return 0;
}