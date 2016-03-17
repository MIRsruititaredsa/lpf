#include<stdio.h>
#include<math.h>

main()
{   
	int a;
	double money,time,i,sum,b,c;
    printf("请输入1或2或3\n");
	printf("1复利计算收益（求拿100万元去买年报酬率10%的股票，若一切顺利，过多长时间，100万元就变成200万元）.\n");
	printf("2.求将100万元变成200万元，应该找到报酬率在多少的投资工具来帮助我达成目标？求投5年后能本金翻倍,且报酬率至少应为多少？\n");
	printf("3.定投计算\n");
	scanf("%d",&a);
	    if(a!=1&&a!=2&&a!=3)
		{
		printf("输入错误，请重新输入！");
	    scanf("%d",&a);
		}
	
	    if(a==1)
		{
		printf("请输入本金:");
        scanf("%lf",&money);
        printf("请输入得到金额:");
        scanf("%lf",&sum);
        printf("请输入利率:");
        scanf("%lf",&i);
        time= log(sum/money) / log(1+i);
        printf("%lf年时间完成\n",time);
		}
		if(a==2)
		{
		printf("请输入本金:");
        scanf("%lf",&money);
        printf("请输入得到金额:");
        scanf("%lf",&sum);
        printf("请输入时间:");
        scanf("%lf",&time);
        b=pow(sum/money,1/time);
        i=(b-1)*100;
        printf("所需利率至少:%lf% \n",i);
		}
		if(a==3)
		{  
		 b=1;
         printf("请输入每年投入金额:");
         scanf("%lf",&money);
         c=money;
         printf("请输入时间:");
         scanf("%lf",&time);
         printf("请输入利率:");
         scanf("%lf",&i);
         while(b<=time)
        {
                sum=money*(1+i);
                money=sum+c;
                b++;
        }
        printf("所得到回报:%lf \n",sum); 
		
		}

}

