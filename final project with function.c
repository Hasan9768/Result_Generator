#include<stdio.h>
#include<stdlib.h> //for clear screen//
//global variable//
int credit = 0,sum_credit=0,choice,choice2,i;
float sgpa = 0,sum_num=0,all_num=0,add,sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9,sem10,sem11,sem12;
char subj[20];

void manu()
{
    printf("\n\n\n\t\t\t\t***RESULT CALCULATOR && PREDICTION***\n\n\n");
    printf("1.Calculate SEMISTER Result:\n\n");
    printf("2.Calculate CGPA Result:\n\n");
    printf("3.Calculate PREDICTION Result:\n\n");
    printf("4.About.\n\n");
    printf("Enter The Serial Number which You want to Calculate:\n\n");
    printf("Example:If You want to Calculate Semister Result Press:1\n\n");
    scanf("%d",&choice);
    system("cls");
    if(choice==1)semister();
    else if(choice==2)cgpa();
    else if(choice==3)prediction();
    else if(choice==4)about();
    else
    printf("Invalid Input!!try again.");
    manu();
    printf("\n");
}
void semister()
{
        printf("Select Semister:\n\n");
        printf("Example:If You want to Calculate 1st Semister Result Press:1\n\n");
        printf("1.1st Semister:\n\n");
        printf("2.2nd Semister:\n\n");
        printf("3.3rd Semister:\n\n");
        for(i=4; i<=12; i++){
        printf("%d.%dth Semister:\n\n",i,i);}

        scanf("%d",&choice2);
        system("cls");
        if(choice2==1)
        {
            printf("\n\n\n\t\t\t\t*****1st SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-112:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-112:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4.00;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit MAT-111:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade MAT-111:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit ENG-113:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade ENG-113:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit PHY-113:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade PHY-113:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit PHY-114:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade PHY-114:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit GED-111:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade GED-111:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("1st Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice);
            system("cls");
            manu();
        }
        else if(choice2==2)
        {
            printf("\n\n\n\t\t\t\t*****2nd SEMISTER INPUT****:\n\n\n");
            printf("Enter course credit CSE-122:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-122:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-123:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-123:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit MAT-121:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade MAT-121:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit ENG-123:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade ENG-123:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-124:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-124:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit GED-121:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade GED-121:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("2nd Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }

        else if(choice2==3)
        {
            printf("\n\n\n\t\t\t\t*****3rd SEMISTER INPUT****:\n\n\n");
            printf("Enter course credit CSE-131:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-131:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-132:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-132:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-133:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-133:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-134:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-134:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-135:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-135:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit MAT-131:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade MAT-131:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("3rd Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }

        else if(choice2==4)
        {
            printf("\n\n\n\t\t\t\t*****4th SEMISTER INPUT****:\n\n\n");
            printf("Enter course credit CSE-212:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-212:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-213:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-213:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-214:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-214:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-215:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-215:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit GED-201:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade GED-201:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit MAT-211:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade MAT-211:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("4th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==5)
        {
            printf("\n\n\n\t\t\t\t*****5th SEMISTER INPUT****:\n\n\n");
            printf("Enter course credit CSE-221:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-221:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-222:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-222:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit STA-133:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade STA-133:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-224:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-224:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-225:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-225:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("5th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==6)
        {
            printf("\n\n\n\t\t\t\t*****6th SEMISTER INPUT****:\n\n\n");
            printf("Enter course credit CSE-231:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-231:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-232:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-232:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-233:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-233:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter course credit CSE-234:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-234:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-235:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-235:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("6th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==7)
        {
            printf("\n\n\n\t\t\t\t*****7th SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-311:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-311:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-312:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-312:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-313:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-313:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-314:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-314:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit GED-321:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade GED-321:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("7th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==8)
        {

            printf("\n\n\n\t\t\t\t*****8th SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-321:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-321:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-322:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-322:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-323:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-323:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-324:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-324:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit ECO-314:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade ECO-314:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("8th Semister Result=%.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();

        }
        else if(choice2==9)
        {
            printf("\n\n\n\t\t\t\t*****9th SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-331:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-331:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-332:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-332:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-333:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-333:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-334:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-334:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit ACT-301:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade ACT-301:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("9th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==10)
        {
            printf("\n\n\n\t\t\t\t*****10th SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-412:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-412:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-413:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-413:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-414:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-414:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-415:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-415:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-417:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-417:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-418:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-418:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("10th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==11)
        {
            printf("\n\n\n\t\t\t\t*****11th SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-421:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-421:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-422:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-422:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-423:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-423:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;

            printf("Enter credit CSE-450:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-450:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;

            printf("Enter credit CSE-499:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-499:\n");
            scanf("%s",&subj);
            if((subj[0]=='A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("11th Semister Result= %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
        }
        else if(choice2==12)
        {
            printf("\n\n\n\t\t\t\t*****12th SEMISTER INPUT****:\n\n\n");
            printf("Enter credit CSE-433:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-433:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num ;
            printf("Enter credit CSE-498:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-498:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;

            printf("Enter credit CSE-499:\n");
            scanf("%d",&credit);
            sum_credit += credit;
            printf("Enter grade CSE-499:\n");
            scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
                sum_num = credit*4;
            else if(subj[0]== 'A' || subj[0]=='a')
                sum_num = credit*3.75;
            else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
                sum_num = credit*3.50;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
                sum_num = credit*3.25;
            else if(subj[0] == 'B' || subj[0] =='b')
                sum_num = credit*3.00 ;
            else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
                sum_num = credit*2.75;
            else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
                sum_num = credit*2.50;
            else if (subj[0] == 'C' || subj[0] == 'c')
                sum_num = credit*2.25;
            else if (subj[0] == 'D' || subj[0] == 'd')
                sum_num = credit*2.00;
            else if (subj[0] == 'F' || subj[0] == 'f')
                sum_num = credit*0.00;
            all_num = all_num + sum_num;
            sgpa = all_num/sum_credit;
            system("cls");
            printf("12th Semister Result = %.2f\n",sgpa);
            printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
            scanf("%d",&choice2);
            system("cls");
            manu();
       }
       else
             printf("Invalid Serial Number!!!Try again.");
}
void cgpa()
    {
        printf("\n\n\n\t\t\t\t*****CGPA RESULT:****\n\n\n");
        printf("Enter 1st Semister Result:\n\n");//will take only grade point//
        scanf("%f",&sem1);
        printf("Enter 2nd Semister Result:\n\n");
        scanf("%f",&sem2);
        printf("Enter 3rd Semister Result:\n\n");
        scanf("%f",&sem3);
        printf("Enter 4th Semister Result:\n\n");
        scanf("%f",&sem4);
        printf("Enter 5th Semister Result:\n\n");
        scanf("%f",&sem5);
        printf("Enter 6th Semister Result:\n\n");
        scanf("%f",&sem6);
        printf("Enter 7th Semister Result:\n\n");
        scanf("%f",&sem7);
        printf("Enter 8th Semister Result:\n\n");
        scanf("%f",&sem8);
        printf("Enter 9th Semister Result:\n\n");
        scanf("%f",&sem9);
        printf("Enter 10th Semister Result:\n\n");
        scanf("%f",&sem10);
        printf("Enter 11th Semister Result:\n\n");
        scanf("%f",&sem11);
        printf("Enter 12th Semister Result:\n\n");
        scanf("%f",&sem12);

        add=(sem1+sem2+sem3+sem4+sem5+sem6+sem7+sem8+sem9+sem10+sem11+sem12)/12;
        system("cls");
        printf("Your CGPA is:%.2f\n",add);
        printf("Press  Any  key(0-9) if you want Return Main Manu.\n");
        scanf("%d",&choice2);
        if(choice2==0)
        system("cls");
        manu();
    }
void prediction()
{
    int choice;
    double CSE112,MAT111,ENG113,PHY113,PHY114,GED111;
    char subj[2];
    printf("1.2nd SEMESTER RESULT PREDICTION\n\n");
    printf("2.3rd SEMESTER RESULT PREDICTION\n\n");
    printf("Enter a serial Number,which Semister You Want to Predict.\n\n");
    printf("Example: If you want to predict 2nd Semister,Press 1.");
    scanf("%d",&choice);
    if(choice==1)
    {
    system("cls");
    printf("\n\n\n\t\t\t\t***1.SECOND SEMESTER RESULT PREDICTION***\n\n\n");
    printf("\t\tEnter the first semester courses result-\n");

                    //1st semester result entry//


    printf("\t\t1.CSE 112:");
    scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        CSE112=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        CSE112=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        CSE112=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        CSE112=65;
    else if(subj[0] == 'B' || subj[0] =='b')
        CSE112=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        CSE112=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        CSE112=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      CSE112=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      CSE112=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      CSE112=35;



    printf("\t\t2.MAT 111:");
    scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        MAT111=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        MAT111=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        MAT111=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        MAT111=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       MAT111=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        MAT111=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        MAT111=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      MAT111=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      MAT111=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      MAT111=35;



    printf("\t\t3.ENG 113:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        ENG113=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        ENG113=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        ENG113=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        ENG113=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       ENG113=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        ENG113=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        ENG113=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      ENG113=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      ENG113=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      ENG113=35;



    printf("\t\t4.PHY 113:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        PHY113=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        PHY113=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        PHY113=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        PHY113=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       PHY113=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
       PHY113=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        PHY113=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      PHY113=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      PHY113=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      PHY113=35;



    printf("\t\t5.PHY 114:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        PHY114=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        PHY114=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        PHY114=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        PHY114=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       PHY114=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
       PHY114=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        PHY114=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      PHY114=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      PHY114=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      PHY114=35;



    printf("\t\t6.GED 111:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        GED111=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        GED111=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        GED111=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        GED111=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       GED111=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        GED111=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
       GED111=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      GED111=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      GED111=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      GED111=35;


      //2nd semester result prediction//
      printf("\n\n\n\n");



      printf("\t\tSecond semester courses-\n ");
      printf("\t\t1.MAT121\n");
      printf("\t\t2.CSE122\n");
      printf("\t\t3.CSE123\n");
      printf("\t\t4.ENG123\n");
      printf("\t\t5.CSE124\n");
      printf("\t\t6.GED121\n");

        int code;
        printf("\n\n");
        printf("\t\tExample: if you want to predict MATH121 course result press 1\n\n");

      printf("\t\tEnter the serial number of the course which you want to predict:");
      scanf("%d",&code);
      int quiz1,quiz2,quiz3,mid,quiz,sum,previous,Add,mark;

      //MAT111 prediction//

      if(code==1)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          previous=(((MAT111)/100)*40);
          Add=(sum-previous);
          mark=((MAT111)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\t\tYou do not pass the exam\n");
            }


      }


      //CSE122 prediction//

      else if(code==2)
      {

          printf("\t\tEnter 1st quiz number: ");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          previous=(((CSE112)/100)*40);
          Add=(sum-previous);
          mark=((CSE112)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }


      }


      //CSE123 prediction//


          else if(code==3)
      {

         printf("\t\tEnter Lab performance number:");
          scanf("%d",&mid);
          system("cls");
          previous=(((CSE112)/100)*25);
          Add=(mid-previous);
          mark=((CSE112)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }



      }

      //ENG123 prediction//

          else if(code==4)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          previous=(((ENG113)/100)*40);
          Add=(sum-previous);
          mark=((ENG113)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }


      }

      //CES124 prediction//

          else if(code==5)
      {

    printf("\t\tWe can not predict this course result.Because we don't know any mid or Assignments marks");
        printf("\n\n\n");


      }


      //GED121 prediction//

          else if(code==6)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          previous=(((GED111)/100)*40);
          Add=(sum-previous);
          mark=((GED111)+Add);



            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("Your predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }
        }

      }
      if(choice==2)
      {
          printf("\n\n\n\t\t\t\t***THIRD SEMESTER RESULT PREDICTION***\n\n\n");
    double CSE112,MAT111,ENG113,PHY113,PHY114,GED111;
    char subj[2];
    printf("\t\tEnter the first semester courses result-\n");

                    //1st semester result entry//





    printf("\t\t1.CSE 112:");
    scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        CSE112=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        CSE112=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        CSE112=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        CSE112=65;
    else if(subj[0] == 'B' || subj[0] =='b')
        CSE112=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        CSE112=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        CSE112=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      CSE112=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      CSE112=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      CSE112=35;



    printf("\t\t2.MAT 111:");
    scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        MAT111=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        MAT111=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        MAT111=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        MAT111=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       MAT111=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        MAT111=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        MAT111=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      MAT111=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      MAT111=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      MAT111=35;



    printf("\t\t3.ENG 113:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        ENG113=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        ENG113=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        ENG113=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        ENG113=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       ENG113=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        ENG113=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        ENG113=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      ENG113=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      ENG113=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      ENG113=35;



    printf("\t\t4.PHY 113:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        PHY113=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        PHY113=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        PHY113=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        PHY113=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       PHY113=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
       PHY113=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        PHY113=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      PHY113=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      PHY113=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      PHY113=35;



    printf("\t\t5.PHY 114:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        PHY114=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        PHY114=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        PHY114=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        PHY114=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       PHY114=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
       PHY114=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        PHY114=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      PHY114=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      PHY114=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      PHY114=35;



    printf("\t\t6.GED 111:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        GED111=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        GED111=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        GED111=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        GED111=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       GED111=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        GED111=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
       GED111=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      GED111=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      GED111=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      GED111=35;



      //second semester Result Entry//







      printf("\n\n\n\n");
      printf("\t\tEnter the second semester courses result-\n");



    double MAT121,CSE122,CSE123,ENG123,CSE124,GED121;
    printf("\t\t1.MAT 121:");
    scanf("%s",&subj);
        if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        MAT121=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        MAT121=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        MAT121=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        MAT121=65;
    else if(subj[0] == 'B' || subj[0] =='b')
        MAT121=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        MAT121=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        MAT121=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
        MAT121=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
        MAT121=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
        MAT121=35;



    printf("\t\t2.CSE 122:");
    scanf("%s",&subj);
            if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        CSE122=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        CSE122=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        CSE122=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        CSE122=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       CSE122=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        CSE122=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        CSE122=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
        CSE122=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
        CSE122=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
        CSE122=35;



    printf("\t\t3.CSE 123:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        CSE123=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        CSE123=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        CSE123=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        CSE123=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       CSE123=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        CSE123=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        CSE123=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
        CSE123=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
        CSE123=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
        CSE123=35;



    printf("\t\t4.ENG 123:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        ENG123=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        ENG123=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        ENG123=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        ENG123=65;
    else if(subj[0] == 'B' || subj[0] =='b')
        ENG123=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        ENG123=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        ENG123=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
        ENG123=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
        ENG123=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
       ENG123=35;



    printf("\t\t5.CSE 124:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        CSE124=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        CSE124=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        CSE124=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        CSE124=65;
    else if(subj[0] == 'B' || subj[0] =='b')
        CSE124=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        CSE124=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
        CSE124=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
        CSE124=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
        CSE124=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
        CSE124=35;



    printf("\t\t6.GED 121:");
    scanf("%s",&subj);
          if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='+'))
        GED121=80;
    else if(subj[0]== 'A' || subj[0]=='a')
        GED121=75;
    else if((subj[0]== 'A'||subj[0]=='a')&&(subj[1]=='-'))
        GED121=75;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='+'))
        GED121=65;
    else if(subj[0] == 'B' || subj[0] =='b')
       GED121=60;
    else if ((subj[0] == 'B' || subj[0] == 'b')&&(subj[1]=='-'))
        GED121=55;
    else if ((subj[0] == 'C' || subj[0] == 'c')&&(subj[1]=='+'))
       GED121=50;
    else if (subj[0] == 'C' || subj[0] == 'c')
      GED121=45;
    else if (subj[0] == 'D' || subj[0] == 'd')
      GED121=40;
    else if (subj[0] == 'F' || subj[0] == 'f')
      GED121=35;




      //3rd semester result prediction//




      printf("\n\n\n\n");



      printf("\t\tThird semester courses-\n ");
      printf("\t\t1.CSE131\n");
      printf("\t\t2.CSE132\n");
      printf("\t\t3.CSE133\n");
      printf("\t\t4.CSE134\n");
      printf("\t\t5.CSE135\n");
      printf("\t\t6.MAT131\n");

        int code;
        printf("\n\n");
        printf("\t\tExample: if you want to predict CSE131 course result press 1\n\n");

      printf("\t\tEnter the serial number of the course which you want to predict:");
      scanf("%d",&code);
      printf("\n");
      int quiz1,quiz2,quiz3,mid,quiz,sum,previous,Add,mark;
      double average;

      //MAT111 prediction//

      if(code==1)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          average=(((MAT111)+(MAT121))/2);
          previous=(((average)/100)*40);
          Add=(sum-previous);
          mark=((average)+Add);

            printf("\n\n");

            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }


      }


      //CSE122 prediction//

      else if(code==2)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          previous=(((PHY113)/100)*40);
          Add=(sum-previous);
          mark=((PHY113)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }


      }


      //CSE123 prediction//


          else if(code==3)
      {

          printf("\t\tEnter Lab performance number:");
          scanf("%d",&mid);
          system("cls");
          previous=(((PHY114)/100)*25);
          Add=(mid-previous);
          mark=((PHY114)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }


      }

      //ENG123 prediction//

          else if(code==4)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          previous=(((((CSE112)+(CSE122))/2)/100)*40);
          Add=(sum-previous);
          mark=((((CSE112)+(CSE122))/2)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("Your predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("Your predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }


      }

      //CES124 prediction//

          else if(code==5)
      {

         printf("\t\tEnter Lab performance number:");
          scanf("%d",&mid);
          system("cls");
          previous=(((CSE123)/100)*25);
          Add=(mid-previous);
          mark=((CSE123)+Add);


            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }

      }


      //GED121 prediction//

          else if(code==6)
      {

          printf("\t\tEnter 1st quiz number:");
          scanf("%d",&quiz1);
          printf("\t\tEnter 2nd quiz number:");
          scanf("%d",&quiz2);
          printf("\t\tEnter 3rd quiz number:");
          scanf("%d",&quiz3);
          printf("\t\tEnter mid examination number:");
          scanf("%d",&mid);
          system("cls");
          quiz=((quiz1+quiz2+quiz3)/3);
          sum=(quiz+mid);
          average=(((MAT111)+(MAT121))/2);
          previous=(((average)/100)*40);
          Add=(sum-previous);
          mark=((average)+Add);

            printf("\n\n");

            if(mark >=80 && mark <=100)
            {
            printf("\t\tYour predicted result is: A+\n");
            }
            else if(mark >=75 && mark <= 79)
            {
            printf("\t\tYour predicted result is: A\n");
            }

            else if(mark >=70 && mark <= 74)
            {
            printf("\t\tYour predicted result is: A-\n");
            }
            else if(mark >=65 && mark <= 69)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
           else if(mark >=60 && mark <= 64)
            {
            printf("\t\tYour predicted result is: B+\n");
            }
            else if(mark >=55 && mark <= 59)
            {
            printf("\t\tYour predicted result is: B-\n");
            }
            else if(mark >=50 && mark <= 54)
            {
            printf("\t\tYour predicted result is: c+\n");
            }
            else if(mark >=45 && mark <= 49)
            {
            printf("\t\tYour predicted result is:c \n");
            }
            else if(mark >=40 && mark <= 44)
            {
            printf("\t\tYour predicted result is: d\n");
            }
            else
            {
            printf("\t\tYou do not pass the exam\n");
            }

      }

      }
}
void about()
{    printf("1.About us.\n");
     printf("2.Help.\n");
     scanf("%d",&choice);
     if(choice==1){
     //printf("\n\n\n");
     printf("\t\t\t\t<<<This Program Created By>>>\n\n\n");
     printf("\t\t\t\t\t<<<HASAN_MOON>>>\n");
     printf("\t\t\t\t\t<<<SOURABH>>>\n");
     printf("\t\t\t\t\t<<<RAHIB>>>\n");
     printf("\t\t\t\t\t<<<FAHAD>>>\n");
     printf("\t\t\t\t\t<<<NIRJHAR>>>\n");
     printf("\t\t\t\t\t<<<RABBI>>>\n\n\n");
     printf("\t\t\t<<<Powered By Daffodil International University>>>\n");
     }

     if(choice==2)
     {
         printf("\t\t\t\tContact us By:mhmoon.cse.9768@gmail.com\n\n\n");
         printf("\t\t\t\tContact us By:Sbshowrav@gmail.com\n\n\n");
         printf("\t\t\t\t\tContact us By:Facebook\n\n\n");
         printf("\t\t\t\tIf you want to Contact By Facebook Press 0\n\n");
         scanf("%d",&choice2);
         if(choice2==0){
        system("Start http://www.facebook.com/sudhutomake.cai");
        system("cls");
        }
        else
            system("cls");
        manu();
     }
    if(choice>2){
    system("cls");
    printf("Invalid Input!!Try again.");
    }
}
int main()
{
     manu();
     return 0;
}
