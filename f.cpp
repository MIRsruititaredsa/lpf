#include<stdio.h>
#include<math.h>

main()
{   
	int a;
	double money,time,i,sum,b,c;
    printf("������1��2��3\n");
	printf("1�����������棨����100��Ԫȥ���걨����10%�Ĺ�Ʊ����һ��˳�������೤ʱ�䣬100��Ԫ�ͱ��200��Ԫ��.\n");
	printf("2.��100��Ԫ���200��Ԫ��Ӧ���ҵ��������ڶ��ٵ�Ͷ�ʹ����������Ҵ��Ŀ�ꣿ��Ͷ5����ܱ��𷭱�,�ұ���������ӦΪ���٣�\n");
	printf("3.��Ͷ����\n");
	scanf("%d",&a);
	    if(a!=1&&a!=2&&a!=3)
		{
		printf("����������������룡");
	    scanf("%d",&a);
		}
	
	    if(a==1)
		{
		printf("�����뱾��:");
        scanf("%lf",&money);
        printf("������õ����:");
        scanf("%lf",&sum);
        printf("����������:");
        scanf("%lf",&i);
        time= log(sum/money) / log(1+i);
        printf("%lf��ʱ�����\n",time);
		}
		if(a==2)
		{
		printf("�����뱾��:");
        scanf("%lf",&money);
        printf("������õ����:");
        scanf("%lf",&sum);
        printf("������ʱ��:");
        scanf("%lf",&time);
        b=pow(sum/money,1/time);
        i=(b-1)*100;
        printf("������������:%lf% \n",i);
		}
		if(a==3)
		{  
		 b=1;
         printf("������ÿ��Ͷ����:");
         scanf("%lf",&money);
         c=money;
         printf("������ʱ��:");
         scanf("%lf",&time);
         printf("����������:");
         scanf("%lf",&i);
         while(b<=time)
        {
                sum=money*(1+i);
                money=sum+c;
                b++;
        }
        printf("���õ��ر�:%lf \n",sum); 
		
		}

}

