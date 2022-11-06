#include<stdio.h>
#include<string.h>
struct item
{
	char productname[10],expirydate[15];
	int quantity,price,productid;
}item;
struct customer
{
    char productname[10],expirydate[15];
	int quantity,price,productid,pay;
}customer[50];
int n=0; //used in to count the no of elements in stock
int j=0; //used in to count the no of elements in cart
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
int spl(int temp1)
{
    int z,temp;
    while (temp1!=0)
    {
        z=temp1%10;
        temp=(temp*10)+z;
        temp1=temp1/10;
    }
    if (temp==10)
            printf("Ten");
    else if (temp==11)
            printf("Eleven");
    else if (temp==12)
            printf("Twelve");
    else if (temp==13)
            printf("Thirteen");
    else if (temp==14)
            printf("Fourteen");
    else if (temp==15)
            printf("Fifteen");
    else if (temp==16)
            printf("Sixteen");
    else if (temp==17)
            printf("Seventeen");
    else if (temp==18)
            printf("Eighteen");
    else if (temp==19)
            printf("Nineteen");
    else if (temp==20)
            printf("Twenty ");
    else if (temp==30)
            printf("Thirty ");
    else if (temp==40)
            printf("Forty ");
    else if (temp==50)
            printf("Fifty ");
    else if (temp==60)
            printf("Sixty ");
    else if (temp==70)
            printf("Seventy ");
    else if (temp==80)
            printf("Eighty ");
    else if (temp==90)
            printf("Ninety ");
    else if (temp==100)
            printf("One Hundred ");
    else if (temp==200)
            printf("Two Hundred ");
    else if (temp==300)
            printf("Three Hundred ");
    else if (temp==400)
            printf("Four Hundred ");
    else if (temp==500)
            printf("Five Hundred ");
    else if (temp==600)
            printf("Six Hundred ");
    else if (temp==700)
            printf("Seven Hundred ");
    else if (temp==800)
            printf("Eight Hundred ");
    else if (temp==900)
            printf("Nine Hundred ");
    else if (temp==1000)
            printf("One Thousand ");
    else if (temp==2000)
            printf("Two Thousand ");
    else if (temp==3000)
            printf("Three Thousand ");
    else if (temp==4000)
            printf("Four Thousand ");
    else if (temp==5000)
            printf("Five Thousand ");
    else if (temp==6000)
            printf("Six Thousand ");
    else if (temp==7000)
            printf("Seven Thousand ");
    else if (temp==8000)
              printf("Eight Thousand ");
    else if (temp==9000)
            printf("Nine Thousand ");
    else
        return 0;
    return 1;
}
int one(int temp1)
{
    if (temp1==0)
            printf(" ");
    else if (temp1==1)
            printf("One");
    else if (temp1==2)
            printf("Two");
    else if (temp1==3)
            printf("Three");
    else if (temp1==4)
            printf("Four");
    else if (temp1==5)
            printf("Five");
    else if (temp1==6)
            printf("Six");
    else if (temp1==7)
            printf("Seven");
    else if (temp1==8)
            printf("Eight");
    else if (temp1==9)
            printf("Nine");
    else
        return 0;
    return 1;
}
int ten(int temp)
{
     if (temp==2)
            printf("Twenty ");
        else if (temp==3)
            printf("Thirty ");
        else if (temp==4)
            printf("Forty ");
        else if (temp==5)
            printf("Fifty ");
        else if (temp==6)
            printf("Sixty ");
        else if (temp==7)
            printf("Seventy ");
        else if (temp==8)
            printf("Eighty ");
        else if (temp==9)
            printf("Ninety ");
        else
            return 0;
        return 1;
}
int hundred(int temp)
{
        if (temp==1)
            printf("One Hundred ");
        else if (temp==2)
            printf("Two Hundred ");
        else if (temp==3)
            printf("Three Hundred ");
        else if (temp==4)
            printf("Four Hundred ");
        else if (temp==5)
            printf("Five Hundred ");
        else if (temp==6)
            printf("Six Hundred ");
        else if (temp==7)
            printf("Seven Hundred ");
        else if (temp==8)
            printf("Eight Hundred ");
        else if (temp==9)
            printf("Nine Hundred ");
        else
            return 0;
        return 1;
}
int thousand(int temp)
{
    if (temp==1)
        printf("One Thousand ");
    else if (temp==2)
        printf("Two Thousand ");
    else if (temp==3)
        printf("Three Thousand ");
    else if (temp==4)
        printf("Four Thousand ");
    else if (temp==5)
        printf("Five Thousand ");
    else if (temp==6)
        printf("Six Thousand ");
    else if (temp==7)
        printf("Seven Thousand ");
    else if (temp==8)
        printf("Eight Thousand ");
    else if (temp==9)
        printf("Nine Thousand ");
    else
        return 0;
    return 1;
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void stl()
{
    int i,j,k;
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t_______________________________________________________\n");
    printf("\t\t\t\t|                                                      |\n");
    printf("\t\t\t\t|                                                      |\n");
    printf("\t\t\t\t|     *****************************************        |\n");
    printf("\t\t\t\t|                                                      |\n");
    printf("\t\t\t\t|**                  WALLMART*                       **|\n");
    printf("\t\t\t\t|                                                      |\n");
    printf("\t\t\t\t|     *****************************************        |\n");
    printf("\t\t\t\t|                                                      |\n");
    printf("\t\t\t\t|______________________________________________________|\n");
    printf("\n\t\t\t\tPLEASE ENTER ANY KEY TO CONTINUE");
    for(i=0; i<5; i++)
    {
        printf(".");
        Sleep(500);//after printing one . another comes after 0.5 seconds
    }
    printf("\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\tPresent By,");
    printf("\n\t\t\t\t\t\t\t\t\t\tDEEPAK KS");
    getch();
    system("cls");
    printf("\n");

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t** THERE IS ALWAYA SOMETHING GOOD HERE **\n\n");

    printf("\n\t\t\t\tPLEASE ENTER ANY KEY TO START");
    for(i=0; i<5; i++)
    {
        printf(".");
        Sleep(500);
    }
    getch();
    system("cls");
}
/////////////////////////////////////////////////////////////////////////////
void create()
{
    int i=0,b;
    FILE *fp;
    fp=fopen("stock.txt","a+");
    if (fp==NULL)
    {
    printf("\t!!23-ERROR!!");
    }
    printf("\tEnter the no of elements to add: ");
    scanf("%d",&n);
    FILE *fpe;
    fpe=fopen("Quantity.txt","r");
	fscanf(fpe,"%d",&b);
	b+=n;
	fclose(fpe);
	while (i<n)
    {
        printf("\tEnter Product No: ");
		scanf("%d",&item.productid);
		printf("\tEnter Product Name: ");
		scanf("%s",item.productname);
		printf("\tEnter Product Quantity: ");
		scanf("%d",&item.quantity);
		printf("\tEnter Price: ");
		scanf("%d",&item.price);
		printf("\tEnter Expiry date: ");
		scanf("%s",item.expirydate);
		fprintf(fp,"%d\t%s\t%d\t%d\t%s\t",item.productid,item.productname,item.quantity,item.price,item.expirydate);
		printf("\n");
		i++;
		int fflush(fp);
    }
    n=b;
    fpe=fopen("Quantity.txt","w");
	fprintf(fpe,"%d",n);
    fclose(fp);
    fclose(fpe);
	printf("\tRecords are Created\n\n");
}
/////////////////////////////////////////////////////////////////////////////
void edit()
{
    display();
    int flag=0,p,k=0,pro,found=0;
    p=n;
    FILE *fp;
    FILE *fpe;
    FILE *fpec;
	fp=fopen("stock.txt","r");
	fpe=fopen("temp1.txt","w");
	fpec=fopen("temp2.txt","w");
	printf("\tEnter the Product_id of the product to be deleted: ");
	scanf("%d",&pro);
	while (k<p)
    {
        k++;
        fscanf(fp,"%d %s %d %d %s",&item.productid,item.productname,&item.quantity,&item.price,item.expirydate);
        if (item.productid==pro)
        {
            found=1;
            n=n-1;
            printf("\tProduct has been Successfully Deleted\n");
        }
        else
        {
           fprintf(fpe,"%d\t%s\t%d\t%d\t%s\t",item.productid,item.productname,item.quantity,item.price,item.expirydate);
        }
    }
    fprintf(fpec,"%d",n);
    fclose(fp);
	fclose(fpe);
	fclose(fpec);
	if(found==0)
	{
	    printf("\t");
		printf("\t!!Product no Found!!\n\n");
	}
	remove("Quantity.txt");
	rename("temp2.txt","Quantity.txt");
	remove("stock.txt");
	rename("temp1.txt","stock.txt");

}
////////////////////////////////////////////////////////////////////////////
void display()
{
    system("cls");
    int dis=0;
    FILE *fp;
    fp=fopen("stock.txt","r");
    if (feof(fp))
    {
        printf("!!!ERROR OPENING FILE!!!");
    }
    printf("\t=========================================================================\n");
	printf("\t| Product_id\t|Product Name\t|Quantity\t|Price\t  |Expiry_date| |\n");
	printf("\t=========================================================================\n");
	while(dis<n)
    {
        dis++;
        fscanf(fp,"%d %s %d %d %s",&item.productid,item.productname,&item.quantity,&item.price,item.expirydate);
        if (item.productid==0)
        {
            printf("\t!!NO ITEM!!\n");
            break;
        }
        printf("\t|\t%d\t   %s\t  %d\t\t  %d\t     %s\t|\n",item.productid,item.productname,item.quantity,item.price,item.expirydate);
    }
    printf("\t=========================================================================\n");
    printf("\n");
    fclose(fp);
}
////////////////////////////////////////////////////////////////////////////
void billout()
{
    system("cls");
    int i;
    printf("\t======================================================================================\n");
	printf("\t|Product_id\t|Product Name\t|Quantity\t|Price\t \t|Cost\t |Expiry_date|\n");
	printf("\t======================================================================================\n");
	if (item.productid==0)
        {
            printf("\t!!NO ITEM!!/n");
        }
    else
    {
        for (i=0;i<j;i++)
        {
        printf("\t|%d\t\t %s\t\t %d\t\t %d\t\t%d\t%s\t|\n",customer[i].productid,customer[i].productname,customer[i].quantity,customer[i].price,customer[i].pay,customer[i].expirydate);
        }
        printf("\t======================================================================================\n");
    }
}
////////////////////////////////////////////////////////////////////////////
void bill()
{
    int ch=0,qty,flag=0,i,choice,flag1=0;
    FILE *fp;
    fp=fopen("stock.txt","r");
    tr:
    printf("\tEnter the product_id: ");
    scanf("%d",&choice);
    fseek(fp,0,0);
    for(i=0;i<n;i++)
        {
            fscanf(fp,"%d\t%s\t%d\t%d\t%s\t",&item.productid,item.productname,&item.quantity,&item.price,item.expirydate);
            if (item.productid==choice)
            {
                re:
                flag=1;
                printf("\tEnter the Quantity you need: ");
                scanf("%d",&qty);
                if (item.quantity<qty)
                {
                    printf("\tSORRY ONLY %d AVAILABLE\n",item.quantity);
                    goto re;
                }
                else
                {
                customer[j].productid=item.productid;
                strcpy(customer[j].productname,item.productname);
                customer[j].quantity=qty;
                customer[j].price=item.price;
                customer[j].pay=item.price*qty;
                strcpy(customer[j].expirydate,item.expirydate);
                j+=1;
                fclose(fp);
                red(item.quantity-qty,choice);
                break;
                }
            }
        }
    if (flag==0)
        {
        printf("\tSORRY PRODUCT NOT FOUND\n");
        goto tr;
        }
}
////////////////////////////////////////////////////////////////////////////
void delete()
{
    int i=0,choice,flag=0,pos;
    printf("\tEnter the product no of the product to be deleted");
    scanf("%d",&choice);
    for(i=0;i<j;i++)
    {
        if (customer[i].productid==choice)
        {
            flag=1;
            pos=i;
            fflush(stdin);
            blk(customer[i].quantity,customer[i].productid);
            break;
        }
    }
    for (i = pos; i < j; i++)
        {
            customer[i].productid=customer[i+1].productid;
            strcpy(customer[i].expirydate,customer[i+1].expirydate);
            strcpy(customer[i].productname,customer[i+1].productname);
            customer[i].quantity= customer[i+1].quantity;
            customer[i].price= customer[i+1].price;
            customer[i].pay= customer[i+1].pay;
        }
        j=j-1;
}
////////////////////////////////////////////////////////////////////////////
void out()
{
    system("cls");
    int i,billamd,dis,tax,pay;
    char na[7];
    printf("*****************************************    WELCOME TO WALLMART    ****************************************************\n");
	printf("\t                               YOU ARE LUCKY TO BE SHOPPING HERE\n");
	printf("\t\t\t\t\t\t                                        SAVE MONEY LIVE BETTER\n");
    printf("\t======================================================================================\n");
	printf("\t|Product_id\t|Product Name\t|Quantity\t|Price\t \t|Cost\t |Expiry_date|\n");
	printf("\t======================================================================================\n");
	if (item.productid==0)
        {
            printf("\t!!NO ITEM!!/n");
        }
    else
    {
        for (i=0;i<j;i++)
        {
        printf("\t|%d\t\t %s\t\t %d\t\t %d\t\t%d\t%s\t|\n",customer[i].productid,customer[i].productname,customer[i].quantity,customer[i].price,customer[i].pay,customer[i].expirydate);
        billamd+=customer[i].pay;
        }
        printf("\t======================================================================================\n");
    }
    printf("\n");
    printf("\n");
    tax=(billamd*19)/100;
    printf("\tTAX 19(GST+SGST): %d\n",tax);
    printf("\tSUB TOTAL: %d\n",billamd+tax);
    dis=(billamd*13)/100;
    printf("\tDISCOUNT AVAILABLE: %d\n",dis);
    pay=(billamd+tax)-dis;
    printf("\tYOUR BILL AMOUND IS: %d\n",pay);
    int temp=0,z=5,len=0,jk,temp1=0,flag=0,num,test;
    num=pay;
    printf("\tRupees ");
    test=spl(num);
    if (test==0)
    {
    while (num!=0)
    {
        len++;
        z=num%10;
        temp1=(temp1*10)+z;
        num=num/10;
    }
    if (len==1)
        one(temp1);
    else if (len==2)
    {
    for (i=0;i<2;i++)
    {
    temp=temp1%10;
        if (i==0)
            ten(temp);
        else if (i==1)
            one(temp);
    temp1=temp1/10;
    }
    }
    else if (len==3)
    {
    for (i=0;i<3;i++)
    {
        temp=temp1%10;
        if (i==0)
         hundred(temp);
        else if (i==1)
            flag=spl(temp1);
        if (i==1 && flag==0)
           ten(temp);
        else if (i==2 && flag==0)
        one(temp);
    temp1=temp1/10;
        }
    }
    }
    if (len==4)
    {
    for (i=0;i<4;i++)
    {
        temp=temp1%10;
       if (i==0)
       thousand(temp);
       else if (i==1)
            hundred(temp);
        else if (i==2)
        flag=spl(temp1);
        if (i==2 && flag==0)
          ten(temp);
        else if (i==3 && flag==0)
        one(temp);
    temp1=temp1/10;
    }
    }
    printf(" Only\n ");
    }
///////////////////////////////////////////////////////////////////////////
void red(int qty,int pro)
{
    int flag=0,p,k=0,found=0;
    p=n;
    FILE *fp;
    FILE *fpe;
	fp=fopen("stock.txt","r");
	fpe=fopen("temp1.txt","w");
	fseek(fp,0,0);
	fseek(fpe,0,0);
	while (k<p)
    {
        k++;
        fscanf(fp,"%d %s %d %d %s",&item.productid,item.productname,&item.quantity,&item.price,item.expirydate);
        if (item.productid==pro)
        {
            fprintf(fpe,"%d\t%s\t%d\t%d\t%s\t",item.productid,item.productname,qty,item.price,item.expirydate);
        }
        else
        {
           fprintf(fpe,"%d\t%s\t%d\t%d\t%s\t",item.productid,item.productname,item.quantity,item.price,item.expirydate);
        }
        fflush(stdin);
    }
    fclose(fp);
	fclose(fpe);
	remove("stock.txt");
	rename("temp1.txt","stock.txt");
}
////////////////////////////////////////////////////////////////////////////
void blk(int qty,int pro)
{
    int p,k=0,qty1;
    p=n;
    FILE *fp;
    FILE *fpe;
	fp=fopen("stock.txt","r");
	fpe=fopen("temp1.txt","w");
	while (k<p)
    {
        k++;
        fscanf(fp,"%d %s %d %d %s",&item.productid,item.productname,&item.quantity,&item.price,item.expirydate);
        if (item.productid==pro)
        {
            qty1=qty+item.quantity;
            printf("%d",qty1);
            fprintf(fpe,"%d\t%s\t%d\t%d\t%s\t",item.productid,item.productname,qty1,item.price,item.expirydate);
        }
        else
        {
           fprintf(fpe,"%d\t%s\t%d\t%d\t%s\t",item.productid,item.productname,item.quantity,item.price,item.expirydate);
        }
    }
    fclose(fp);
	fclose(fpe);
	remove("stock.txt");
	rename("temp1.txt","stock.txt");
}
///////////////////////////////////////////////////////////////////////////
int main()
{
    stl();
    char cz,password[10],q[10]="deepak";
    int ch,admin,cos,i,mux;
    FILE *fpe;
	fpe=fopen("Quantity.txt","r");
	fscanf(fpe,"%d",&n);
	fclose(fpe);
    printf("\n");
	printf("************************************************************************************************************************\n");
	printf("*****************************************    WELCOME TO WALLMART    ****************************************************\n");
	printf("\t                               YOU ARE LUCKY TO BE SHOPPING HERE");
	printf("\n\n");
	printf("\t\t\tPlease note that all the Product's Price are Discounted and are Genuine\n");
	printf("\t\t\t\t\t");
    printf("      Reference Number: %d\n",n);
    git:
    q:
    start: printf("\n\t");
    printf("****************************\n");
    printf("\tPlease Select an Option:\n ");
    printf("\t****************************\n");
    printf("\t1.ADMIN\n \t2.CUSTOMER\n \t3.EXIT\n\n");
    printf("\tPlease Enter an Option:  ");
    scanf("%d",&ch);
    printf("\n");
    while (ch!=4)
    {
    if (ch==1)
        {
        printf("\tEnter Password:\t");
        for(i=0;i<6;i++)
        {
        cz = getch();
        password[i] = cz;
        cz = '*' ;
        printf("%c",cz);
        }
        password[i]='\0';
        if(strcmp(password,q))
            {
            printf("\n\t");
            printf("Wrong Password Please Try Again");
            printf("\n\n");
            goto q;
            }
        else
        {
            printf("\n");
            goto con;
        }
        con:
        printf("\n");
        printf("\t****************************\n");
        printf("\tPlease Select an Option:\n ");
        printf("\t****************************\n");
        printf("\t1.ADD NEW PRODUCTS\n \t2.DELETE A PRODUCT\n \t3.DISPLAY\n \t4.EXIT\n\n");
        printf("\tPlease Enter an Option:  ");
        scanf("%d",&admin);
        printf("\n");
        while (admin!=4)
        {
            if (admin==1)
            {
               create();
            }
            else if (admin==2)
            {
              edit();
            }
            else if (admin==3)
            {
               display();
            }
            goto git;
        }
        if (admin==4)
        {
            system("cls");
            goto q;
        }
    }
    else if (ch==2)
        {
            printf("\t****************************\n");
            printf("\tPlease Select an Option:\n ");
            printf("\t****************************\n");
            printf("\t1.ADD PRODUCTS\n \t2.CART\n \t3.DELETE ITEM IN CART\n\t4.CHECK OUT\n\n\n");
            printf("\tPlease Enter an Option: ");
            scanf("%d",&cos);
            while (cos!=0)
                {
                if (cos==1)
                {
                  coco:
                  display();
                  bill();
                  printf("\tEnter 3 to EXIT");
                  scanf("%d",&mux);
                  printf("\n");
                  if (mux!=3)
                  {
                    system("cls");
                    goto coco;
                  }
                }
                else if (cos==2)
                {
                billout();
                }
                else if (cos==3)
                {
                  billout();
                  delete();
                }
                else if(cos==4)
                {
                  out();
                  goto exit;
                }
            printf("\t****************************\n");
            printf("\tPlease Select an Option:\n ");
            printf("\t****************************\n");
            printf("\t1.ADD PRODUCTS\n \t2.CART\n \t3.DELETE ITEM IN CART\n\t4.CHECK OUT\n\n\n");
            printf("\tPlease Enter an Option: ");
            scanf("%d",&cos);
            }
        }
    else if (ch==3)
        {
        exit:
        system("color 0c");
        printf("\n");
        printf("\n");
        printf("\tExiting");
        for(i=0; i<10; i++)
        {
        printf(".");
        Sleep(500);
        }
        break;
        }
    else
        {
        printf("\t!!ERROR!!\n");
        goto start;
        }
    }
    return 0;
}
