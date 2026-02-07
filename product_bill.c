#include <stdio.h>
int main()
{
	int pro_id;
	char pro_name[10];
	float price;
	int qty;
	float total, cgst, sgst, final_total;
	
	
	printf("Enter Product Id:");
	scanf("%d", &pro_id);
	printf("\nEnter Product Name:");
	scanf("%s", &pro_name);
	printf("\nEnter Product Price:");
	scanf("%f", &price);
	printf("\nEnter Product Quantity:");
	scanf("%d", &qty);
	
	total= price* qty;
	cgst= total* 0.06;
	sgst= total* 0.06;
	final_total= total+ cgst + sgst;
	
	
	printf("\n----------------Product Bill---------------------");
	printf("\nProduct Id:%d", pro_id);
	printf("\nProduct Name:%s", pro_name);
	printf("\nProduct Price:%f", price);
	printf("\nProduct Quantity:%d", qty);
	printf("\nProduct Total:%f", total);
	printf("\nProduct cgst:%d", cgst);
	printf("\nProduct sgst:%f", sgst);
	printf("\nProduct Final Total:%f",final_total);
	printf("\n----------------!!!!Thankyou!!!!-----------------");
	
	return 0;
	
}
