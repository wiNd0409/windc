// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 

//Calculate percentage and grade according to following:
//Percentage > 90%: Grade A
//Percentage > 80%: Grade B
//Percentage > 70%: Grade C
//Percentage > 60%: Grade D
//Percentage > 40%: Grade E
//Percentage < 40%: Grade F


#include <stdio.h>

int main()
{

float vatly, sinhhoc, hoahoc, toan, maytinh;
float ptvatly, ptsinhhoc, pthoahoc, pttoan, ptmaytinh;

printf("Nhap diem tung mon vao ben duoi");
printf("\nNhap diem mon Vat ly: ");
scanf("%f", &vatly);

ptvatly = (vatly / 10)*100;
if ( ptvatly > 90 )
printf("\n\nMon Vat ly co diem dat hang A\n");
else if ( ptvatly > 80)
printf("Mon Vat ly diem dat hang B\n");
else if ( ptvatly > 70)
printf("Mon Vat ly diem dat hang C\n");
else if ( ptvatly > 60)
printf("Mon Vat ly diem dat hang D\n");
else if ( ptvatly > 40)
printf("Mon Vat ly diem dat hang E\n");
else 
printf("Mon Vat ly diem dat hang F\n");



printf("\n\nNhap diem mon Hoa hoc: ");
scanf("%f", &hoahoc);

pthoahoc = (hoahoc / 10)*100;
if ( pthoahoc > 90 )
printf("Mon Hoa hoc co diem dat hang A\n");
else if ( pthoahoc > 80)
printf("Mon Hoa hoc diem dat hang B\n");
else if ( pthoahoc > 70)
printf("Mon Hoa hoc diem dat hang C\n");
else if ( pthoahoc > 60)
printf("Mon Hoa hoc diem dat hang D\n");
else if ( pthoahoc > 40)
printf("Mon Hoa hoc diem dat hang E\n");
else 
printf("Mon Hoa hoc diem dat hang F\n");



printf("\n\nNhap diem mon Sinh hoc: ");
scanf("%f", &sinhhoc);

ptsinhhoc = (sinhhoc / 10)*100;
if ( ptsinhhoc > 90 )
printf("Mon Sinh hoc co diem dat hang A\n");
else if ( ptsinhhoc > 80)
printf("Mon Sinh hoc diem dat hang B\n");
else if ( ptsinhhoc > 70)
printf("Mon Sinh hoc diem dat hang C\n");
else if ( ptsinhhoc > 60)
printf("Mon Sinh hoc diem dat hang D\n");
else if ( ptsinhhoc > 40)
printf("Mon Sinh hoc diem dat hang E\n");
else 
printf("Mon Sinh hoc diem dat hang F\n");


printf("\n\nNhap diem mon Toan: ");
scanf("%f", &toan);

pttoan = (toan / 10)*100;
if ( pttoan > 90 )
printf("Mon Toan co diem dat hang A\n");
else if ( pttoan > 80)
printf("Mon Toan hoc diem dat hang B\n");
else if ( pttoan > 70)
printf("Mon Toan diem dat hang C\n");
else if ( pttoan > 60)
printf("Mon Toan diem dat hang D\n");
else if ( pttoan > 40)
printf("Mon Toan diem dat hang E\n");
else 
printf("Mon Toan diem dat hang F\n");


printf("\n\nNhap diem mon May tinh: ");
scanf("%f", &maytinh);

ptmaytinh= (maytinh / 10)*100;
if ( ptmaytinh > 90 )
printf("Mon May tinh co diem dat hang A\n");
else if ( ptmaytinh > 80)
printf("Mon May tinh diem dat hang B\n");
else if ( ptmaytinh > 70)
printf("Mon May tinh diem dat hang C\n");
else if (ptmaytinh > 60)
printf("Mon May tinh diem dat hang D\n");
else if ( ptmaytinh > 40)
printf("Mon May tinh diem dat hang E\n");
else 
printf("Mon May tinh diem dat hang F\n");


return 0;


}
