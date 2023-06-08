#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct person{
    char name[50];
    char adress[100];
    int phone;
};

int converter(char x){
    return x;
}

int main(){
	int i, j, n = 0, option = 0;

	printf("How many people do you want register?: ");
	scanf("%d", &n);
	fflush(stdin);

	int converted[n];

    struct person info[n];

	for(i = 0; i < n; i++){
		printf("\n----------Person number %d----------\n", i+1);
		printf("\nEnter the person name: ");
		gets(info[i].name);
		fflush(stdin);

		printf("\nEnter the person adress: ");
		gets(info[i].adress);
		fflush(stdin);

		printf("\nEnter the personal number: ");
		scanf("%d", &info[i].phone);
		fflush(stdin);
		printf("\n----------Saved----------\n");
		printf("\n\n");
	} 

	printf("\nDo you want print the saved info? 1.Yes or 2.No: ");
	scanf("%d", &option);

	if(option == 1){
		for(i = 0; i < n; i++){
			converted[i] = converter(info[i].name[0]);
		}
		for(j = 0; j < n; j++){
			if(converted[j] < converted[j-1]){
				printf("\nName: %s", info[j].name);
			}
			else if(converted[j] < converted[j+1]){
				printf("\nName: %s", info[j].name);
			}
			else{
				printf("\nName: %s", info[j+1]);
			}
		}
	}
	else{
		printf("\nPress enter for finish the program");
	}

	return 0;
}
