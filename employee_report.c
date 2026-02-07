#include <stdio.h>
int main()
{
	int emp_id;
	char emp_name[10];
	int salary , hra, ta, ma, pf, gross_salary;
	
	printf("Enter Employee Id:");
	scanf("%d", &emp_id);
	printf("\nEnter Employee Name:");
	scanf("%s", &emp_name);
	printf("\nEnter Employee Salary:");
	scanf("%d", &salary);
	
	hra= salary * 40/100;
	ta= salary * 10/100;
	ma= salary * 5/100;
	pf= salary * 12/100;
	gross_salary= salary + hra +ta +ma;
	
	
	printf("\n----------------Employee Payment Slip-----------------");
	printf("\nEmployee Id:%d", emp_id);
	printf("\nEmployee Name:%s", emp_name);
	printf("\nEmployee Salary:%d", salary);
	printf("\nEmployee HRA:%d", hra);
	printf("\nEmployee TA:%d", ta);
	printf("\nEmployee MA:%d", ma);
	printf("\nEmployee PF:%d", pf);
	printf("\nEmployee Gross Salary:%d",gross_salary );
	printf("\n----------------!!!!Thankyou!!!!-----------------");
	
	return 0;
	
}
