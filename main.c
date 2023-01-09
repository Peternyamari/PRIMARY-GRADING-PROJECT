#include <stdio.h>
#include <stdlib.h>

int main()
{
    double maths,english,kiswahili,science;
    char name;
    printf("GEKANO PRIMARY TERM 3 EXAMS\n");
    printf("______________________________\n");
    printf("ENTER MATHS SCORE:");
    scanf("%lf",&maths);
    printf("ENTER ENGLISH SCORE:");
    scanf("%lf",&english);
    printf("ENTER KISWAHILI SCORE:");
    scanf("%lf",&kiswahili);
    printf("ENTER SCIENCE SCORE:");
    scanf("%lf",&science);
    printf("MATHS:");
    if (maths>=50){
        printf("PASS\n");
    }else if(maths<50){
    printf("FAIL\n");
    }
    printf("ENGLISH:");
    if (english>=50){
        printf("PASS\n");
    }else if(english<50){
    printf("FAIL\n");
    }
    printf("KISWAHILI::");
    if (kiswahili>=50){
        printf("PASS\n");
    }else if(kiswahili<50){
    printf("FAIL\n");
    }
    printf("SCIENCE:");
    if (science>=50){
        printf("PASS\n");
    }else if(science<50){
    printf("FAIL\n");
    }
    printf("TOTAL MARKS: %.0lf\n",maths+english+kiswahili+science);
    printf("AVERAGE: %.0lf\n",(maths+english+kiswahili+science)/4);
    printf("GRADE:");
    if ((maths+english+kiswahili+science)/4>=0 && (maths+english+kiswahili+science)/4<=30){
    printf("D\n");
    }
     if ((maths+english+kiswahili+science)/4>=31 && (maths+english+kiswahili+science)/4<=40){
    printf("C\n");
    }
        if ((maths+english+kiswahili+science)/4>=41 && (maths+english+kiswahili+science)/4<=60){
    printf("B\n");
    }
    if ((maths+english+kiswahili+science)/4>=60 && (maths+english+kiswahili+science)/4<=100){
    printf("A\n");
    }
   printf("PRINCIPAL:");
   scanf("%s",name);
    return 0;
}
