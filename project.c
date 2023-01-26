#include<stdio.h>
#include<string.h>
 void intro()
 {
   int speed = 5;
	int i,j,k;
	int a;
	system("cls");
 	char welcome[30]= "\t\t\t\tWELCOME TO IU BANK";
 	for(i=0 ; i<22 ; i++)
 	{
 		for(j=0 ; j<speed*10000000 ; j++)
		{
			k=j;
		}
		
 		printf("%c",welcome[i]); 
        
 	}
 }
int main()
{
    // intro();
    FILE *crd;
    FILE *crd2;
    FILE *updadd1;
    FILE *updph1;
    FILE *updadd2;
    FILE *updph2;
    FILE *acc3;
    FILE *acc3add;
    FILE *acc3ph;
    FILE *acc3pass;
    FILE *acc3bal;

    // system("cls");
    int a,b,c,d,i,l;
    char exit;
    int id;
    int pass;

    char name[5][50];
    char nic[5][20];
    char address[5][100];
    char phone[5][20];
    int idacc[5];
    int passacc[5];
    char updadd[5][150];
    char updph[4][20];

//account 1 data
    strcpy(name[0],"Muhammad Daniyal Khan");
    strcpy(nic[0],"10101-1010101-1");
    int balance0 = 1000;
    int balance;

    idacc[0] = 111;
    passacc[0] = 111;


//account 2 data
    strcpy(name[1],"Anas Ahsan");
    strcpy(nic[1],"20202-2020202-2");
    idacc[1] = 222;
    passacc[1] = 222;

//for third account by user
    char cacc [5][150];
    int cacc_bal;
    idacc[2]=333; 
    passacc[2];

    char acc3namet[150];
    char acc3nict[150];
    char acc3addt[150];
    char acc3pht[150];
    int acc3balt;

    acc3pass = fopen("acc3pass.txt","r");
    fscanf(acc3pass , "%d" , &passacc[2]);
    fclose(acc3pass);




//for admin account
    int admin_id = 4444;
    int admin_pass = 4444;
    int admin_id_chk;
    int admin_pass_chk;


    int bal;
    int bal2;



do{
    system("cls");
    printf("\n\n\nChoose an Option : \n1. Sign in\n2. Sign up\n3. Admin Login\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Enter Your Id and Password\n");
        scanf("%d", &id);
        scanf("%d", &pass);

        if(id == idacc[0] && pass == passacc[0])
        {
            do{

            system("cls");
            printf("\n1. Transaction");
            printf("\n2. Check Detail");
            printf("\n3. Logout\n");
            scanf(" %d",&b);
            switch(b)
            {
                case 1:
                system("cls");
                    crd = fopen("credit.txt","r");
                    printf("Choose an operation : \n1. Credit\n2. Debit\n");
                    scanf(" %d",&c);
                    int temp=0;
                    fscanf(crd ,"%d ",&temp);
                    
                    switch(c)
                    {
                        case 1:
                            crd = fopen("credit.txt","w");
                            printf("Your Current Balance is : %d\n",temp);
                            printf("Enter a Amount :\n");
                            scanf("%d",&balance);
                             bal = temp+balance;
                            fprintf(crd ,"%d",bal);


                            fclose(crd);
                            printf("Your new balance is %d",bal);

                        break;



                        case 2:
                            printf("Your current balance is  : %d\n",temp);
                            printf("Enter a Amount :\n");
                            scanf("%d",&balance);
                            if (balance > temp)
                            {
                                printf("You don't have enought balance to perform this transaction !\n");
                            }
                            else 
                            {
                            crd = fopen("credit.txt","w");
                            bal = temp-balance;
                            fprintf(crd ,"%d",bal);
                            printf("Your new balance is %d",bal);
                            }


                fclose(crd);
                        break;
                    }

                break;

                case 2:
                system("cls");
                    updadd1=fopen("updadd1.txt","r");
                    char temp_ad[150];
                    fscanf(updadd1 , " %[^\n]s\n",&temp_ad);
                    fclose(updadd1);
                    updph1=fopen("updph1.txt","r");
                    char temp_ph[20];
                    fscanf(updph1 , " %[^\n]s\n",&temp_ph);
                    fclose(updph1);
                    printf("\nName\t : %s",name[0]);
                    printf("\nNic\t : %s",nic[0]);
                    printf("\nAddress\t : %s",temp_ad);
                    printf("\nPhone\t : %s",temp_ph);
                    crd = fopen("credit.txt","r");
                    fscanf(crd , "%d",&bal);
                    printf("\nBalance\t : %d",bal);
                    fclose(crd);


                break;


                break;

                case 3:
                // return 0;
                break;

            }
                if(b==3)
                {
                    break;
                }
                printf("\nDo you want to perform another operation (y/n)\n");
                scanf(" %c",&exit);
            }while(exit=='y'||exit=='Y');

        }

        else if(id == idacc[1] && pass == passacc[1])
        {
            do{
            system("cls");
            printf("\n1. Transaction");
            printf("\n2. Check Detail");
            printf("\n3. Logout\n");
            scanf("%d",&b);
            switch(b)
            {
                case 1:
                system("cls");
                    crd2 = fopen("credit2.txt","r");
                    printf("Choose an operation : \n1. Credit\n2. Debit\n");
                    scanf(" %d",&c);
                    int temp=0;
                    fscanf(crd2 ,"%d",&temp);
                fclose(crd2);
                    
                    switch(c)
                    {
                        case 1:
                            crd2 = fopen("credit2.txt","w");
                            printf("Enter a Amount : %d\n",temp);
                            scanf("%d",&balance);
                             bal2 = temp+balance;
                            fprintf(crd2 ,"%d",bal2);


                fclose(crd2);
                        printf("Your new balance is %d",bal2);
                        break;
                        case 2:
                        crd2 = fopen("credit2.txt","w");
                            printf("Enter a Amount : %d\n",temp);
                            scanf("%d",&balance);
                             bal2 = temp-balance;
                            fprintf(crd2 ,"%d",bal2);


                fclose(crd2);
                        printf("Your new balance is %d",bal2);
                        break;
                    }

                break;

                case 2:
                system("cls");
                    updadd2=fopen("updadd2.txt","r");
                    char temp_ad[150];
                    fscanf(updadd2 , " %[^\n]s\n",&temp_ad);
                    fclose(updadd2);
                    updph2=fopen("updph2.txt","r");
                    char temp_ph[20];
                    fscanf(updph2 , " %[^\n]s\n",&temp_ph);
                    fclose(updph2);
                    printf("\nName\t : %s",name[1]);
                    printf("\nNic\t : %s",nic[1]);
                    printf("\nAddress\t : %s",temp_ad);
                    printf("\nPhone\t : %s",temp_ph);
                    crd2 = fopen("credit2.txt","r");
                    fscanf(crd2 , "%d",&bal2);
                    printf("\nBalance\t : %d",bal2);
                    fclose(crd2);


                break;

                case 3:
                // return 0;
                break;
            }
                if(b==3)
                {
                    break;
                }
        printf("\nDo you want to perform another operation (y/n)\n");
                scanf(" %c",&exit);
            }while(exit=='y'||exit=='Y');

        }

        else if (id == idacc[2] && pass == passacc[2] )
        {
            int temp3,balance3;
            do{
            system("cls");
            printf("\n1. Transaction");
            printf("\n2. Check Detail");
            printf("\n3. Logout\n");
            scanf("%d",&b);
                acc3bal = fopen("acc3bal.txt","r");
                fscanf(acc3bal , "%d" , &temp3);
                fclose(acc3bal);
            switch(b)
            {

                case 1:
                system("cls");
                printf("Choose an operation : \n1. Credit\n2. Debit\n");
                scanf(" %d",&c);
                switch(c)
                {
                    case 1:
                    printf("\nYour Current Balance is %d\n",temp3);
                    printf("\nEnter a amount for credit : \n");
                    scanf("%d",&balance3);
                    temp3 = temp3 + balance3;
                    acc3bal = fopen("acc3bal.txt","w");
                    fprintf(acc3bal , "%d" , temp3);
                    fclose(acc3bal);
                    printf("Your New Balance is %d",temp3);
                    break;
                    case 2:
                    printf("\nYour Current Balance is %d\n",temp3);
                    printf("\nEnter a amount for debit : \n");
                    scanf("%d",&balance3);
                    if(balance3<temp3)
                    {    
                    temp3 = temp3 - balance3;
                    acc3bal = fopen("acc3bal.txt","w");
                    fprintf(acc3bal , "%d" , temp3);
                    fclose(acc3bal);
                    printf("Your New Balance is %d",temp3);
                    }
                    else 
                    {
                        printf("\nYour do not have enough balance to perform this transaction !!!");
                    }

                    break;
                    default:
                    break;
                }


                break;

                case 2:
                system("cls");

                    acc3 = fopen ("acc3.txt","r");
                    acc3add = fopen ("acc3add.txt","r");
                    acc3ph = fopen ("acc3ph.txt","r");
                    acc3bal = fopen ("acc3bal.txt","r");
                    do{
                        fscanf(acc3 , "%[^\n]" , &acc3namet);
                        fscanf(acc3 , "%s" , &acc3nict);

                    }while(feof(acc3));

                    fscanf(acc3add , "%[^\n]" , &acc3addt);
                    fscanf(acc3ph , "%[^\n]" , &acc3pht);
                    fscanf(acc3bal , "%d" , &acc3balt);

                    printf("\nName\t : %s",acc3namet);
                    printf("\nNic\t : %s",acc3nict);
                    printf("\nAddress\t : %s",acc3addt);
                    printf("\nPhone\t : %s",acc3pht);
                    printf("\nBalance\t : %d",acc3balt);
                    fclose(acc3);
                    fclose(acc3add);
                    fclose(acc3ph);
                    fclose(acc3bal);



                break;
                case 3:

                break;
            }
            if(b==3)
                {
                    break;
                }
            printf("\nDo you want to perform another operation (y/n)\n");
                scanf(" %c",&exit);
            }while(exit=='y'||exit=='Y');
                        
        }
        

        else
        {
            printf("Enter a Correct Information");
        }

        break;

    case 2:
    system("cls");
        printf("\nWelcome to Account creation \n\n\n");
        printf("\nEnter your name\n");
        scanf(" %[^\n]",&cacc[0]);
        printf("\nEnter your nic\n");
        scanf(" %[^\n]",&cacc[1]);
        printf("\nEnter your address\n");
        scanf(" %[^\n]",&cacc[2]);
        printf("\nEnter your phone no.\n");
        scanf(" %[^\n]",&cacc[3]);
        printf("\nEnter your intial balance\n");
        scanf(" %d",&cacc_bal);
        printf("\nEnter Your Password \n");
        scanf("%d",&passacc[2]);



        acc3 = fopen("acc3.txt","w");
        for(i=0 ; i<2 ; i++)
        {
            fprintf(acc3 , "%s\n" , cacc[i]);
        }
        fclose(acc3);



        acc3add = fopen("acc3add.txt","w");
        fprintf(acc3add , "%s", cacc[2]);
        fclose(acc3add);



        acc3ph = fopen("acc3ph.txt","w");
        fprintf(acc3ph , "%s", cacc[3]);
        fclose(acc3ph);

        acc3pass = fopen("acc3pass.txt","w");
        fprintf(acc3pass , "%d" , passacc[2]);
        fclose(acc3pass);

        acc3bal = fopen("acc3bal.txt","w");
        fprintf(acc3bal , "%d" , cacc_bal);
        fclose(acc3bal);







        
        break;


    case 3:

            printf("\nEnter Admin Id \n");
            scanf("%d",&admin_id_chk);
            printf("Enter Admin Password \n");
            scanf("%d",&admin_pass_chk);
            if( admin_id == admin_id_chk && admin_pass == admin_pass_chk )
            {
            do{
                printf("Enter a Account ID : \n");
                scanf("%d",&l);
                if(l == idacc[0])
                {
                    system("cls");
                    printf("\n1.Update Information\n2.Accounts Detail\n");
                    scanf("%d",&d);
                    switch(d)
                    {
                    case 1:
                    printf("\n1. Address Updation \n2.Phone Updation\n");
                    scanf("%d",&l);
                        system("cls");
                    switch(l)
                    {
                        case 1:
                            printf("Enter Your new address \n");
                            scanf(" %[^\n]",&updadd[0]);
                            updadd1 = fopen("updadd1.txt","w");
                            fprintf(updadd1 , "%s" , updadd[0]);
                            fclose(updadd1);
                            printf("Your Address is Succefully Upadated");

                        break;

                        case 2:
                            printf("Enter Your new Phone Number\n");
                            scanf(" %[^\n]",&updph[0]);
                            updph1 = fopen("updph1.txt","w");
                            fprintf(updph1 , "%s" , updph[0]);
                            fclose(updph1);
                            printf("Your Phone Number is Succefully Upadated");

                        break;
                        default:
                        break;
                    }
                    break;
                    case 2:
                    updadd1=fopen("updadd1.txt","r");
                    char temp_ad[150];
                    fscanf(updadd1 , " %[^\n]s\n",&temp_ad);
                    fclose(updadd1);
                    updph1=fopen("updph1.txt","r");
                    char temp_ph[20];
                    fscanf(updph1 , " %[^\n]s\n",&temp_ph);
                    fclose(updph1);
                    printf("\nName\t : %s",name[0]);
                    printf("\nNic\t : %s",nic[0]);
                    printf("\nAddress\t : %s",temp_ad);
                    printf("\nPhone\t : %s",temp_ph);
                    crd = fopen("credit.txt","r");
                    fscanf(crd , "%d",&bal);
                    printf("\nBalance\t : %d",bal);
                    fclose(crd);
                    break;

                    }
                }
                else if(l == idacc[1])
                {
                    system("cls");
                     printf("\n1.Update Information\n2.Accounts Detail\n");
                    scanf("%d",&d);
                    switch(d)
                    {
                    case 1:
                       printf("\n1. Address Updation \n2.Phone Updation\n");
                       scanf("%d",&l);
                            system("cls");
                        switch(l)
                        {
                            case 1:
                                printf("Enter Your new address \n");
                                scanf(" %[^\n]",&updadd[1]);
                                updadd2 = fopen("updadd2.txt","w");
                                fprintf(updadd2 , "%s" , updadd[1]);
                                fclose(updadd2);
                                printf("Your Address is Succefully Upadated");

                            break;

                            case 2:
                                printf("Enter Your new Phone Number\n ");
                                scanf(" %[^\n]",&updph[1]);
                                updph2 = fopen("updph2.txt","w");
                                fprintf(updph2 , "%s" , updph[1]);
                                fclose(updph2);
                                printf("Your Phone Number is successfully Upadated");

                            break;
                            default:
                            break;
                        }
                    break;
                    case 2:

                    updadd2=fopen("updadd2.txt","r");
                    char temp_ad[150];
                    fscanf(updadd2 , " %[^\n]s\n",&temp_ad);
                    fclose(updadd2);
                    updph2=fopen("updph2.txt","r");
                    char temp_ph[20];
                    fscanf(updph2 , " %[^\n]s\n",&temp_ph);
                    fclose(updph2);
                    printf("\nName\t : %s",name[1]);
                    printf("\nNic\t : %s",nic[1]);
                    printf("\nAddress\t : %s",temp_ad);
                    printf("\nPhone\t : %s",temp_ph);
                    crd2 = fopen("credit2.txt","r");
                    fscanf(crd2 , "%d",&bal2);
                    printf("\nBalance\t : %d",bal2);
                    fclose(crd2);
                    break;

                    }

                }
                else if(l == idacc[2])
                {
                    system("cls");
                    printf("\n1.Update Information\n2.Accounts Detail\n");
                    scanf("%d",&d);
                    switch(d)
                    {
                        case 1:
                        printf("\n1. Address Updation\n2.Phone Number Updation\n");
                        scanf("%d",&l);
                            system("cls");
                        switch(l)
                        {
                            case 1:
                                printf("Enter Your new address \n");
                                scanf(" %[^\n]",&updadd[2]);
                                acc3add = fopen("acc3add.txt","w");
                                fprintf(acc3add , "%s" ,updadd[2]);
                                fclose(acc3add);
                                printf("Your address is successfully updated:\n");
                                break;
                            case 2:
                                printf("Enter Your new Phone Number \n");
                                scanf(" %[^\n]",&updph[2]);
                                acc3ph = fopen("acc3ph.txt","w");
                                fprintf(acc3ph , "%s" ,updph[2]);
                                fclose(acc3ph);
                                printf("Your Phone number is successfully updated:\n");

                            break;
                        }
                        break;
                        case 2:
                                acc3 = fopen ("acc3.txt","r");
                    acc3add = fopen ("acc3add.txt","r");
                    acc3ph = fopen ("acc3ph.txt","r");
                    acc3bal = fopen ("acc3bal.txt","r");
                    do{
                        fscanf(acc3 , "%[^\n]" , &acc3namet);
                        fscanf(acc3 , "%s" , &acc3nict);

                    }while(feof(acc3));

                    fscanf(acc3add , "%[^\n]" , &acc3addt);
                    fscanf(acc3ph , "%[^\n]" , &acc3pht);
                    fscanf(acc3bal , "%d" , &acc3balt);

                    printf("\nName\t : %s",acc3namet);
                    printf("\nNic\t : %s",acc3nict);
                    printf("\nAddress\t : %s",acc3addt);
                    printf("\nPhone\t : %s",acc3pht);
                    printf("\nBalance\t : %d",acc3balt);
                    fclose(acc3);
                    fclose(acc3add);
                    fclose(acc3ph);
                    fclose(acc3bal);

                        break;
                    }

                }
                else 
                {
                    printf("Invalid Account : ");
                }
            printf("\nDo you want to continue from admin page(y/n)\n");
            scanf(" %c",&exit);

            }while( exit == 'y'|| exit == 'Y');
            }

            else
            {
                printf("\nInvalid ID or Password !\n");
            }


        break;

   default:
        printf("\nPlease Select Between 1-3");
        break;
        
    }
printf("\nDo you want to Continue (y/n)\n");
scanf(" %c",&exit);

}while(exit=='y'||exit=='Y');


}